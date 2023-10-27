#include "socket_handler.hh"
#include <iostream>

SocketHandler::SocketHandler(ExecuteCommands& executor) : executor(executor), sockfd(INVALID_SOCKET) {
    // Initialize Winsock
    WSADATA wsaData;
    int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (result != 0) {
        std::cerr << "WSAStartup failed with error: " << result << std::endl;
        exit(1);
    }

    // Create a socket (IPv4, TCP)
    sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sockfd == INVALID_SOCKET) {
        std::cerr << "Failed to create socket. Error: " << WSAGetLastError() << std::endl;
        WSACleanup();
        exit(1);
    }

    // Listen to port 9999 on any address
    sockaddr.sin_family = AF_INET;
    sockaddr.sin_addr.s_addr = INADDR_ANY;
    sockaddr.sin_port = htons(9999);

    if (bind(sockfd, reinterpret_cast<struct sockaddr*>(&sockaddr), sizeof(sockaddr)) == SOCKET_ERROR) {
        std::cerr << "Failed to bind to port 9999. Error: " << WSAGetLastError() << std::endl;
        closesocket(sockfd);
        WSACleanup();
        exit(1);
    }

    // Start listening. Hold at most 10 connections in the queue
    if (listen(sockfd, 10) == SOCKET_ERROR) {
        std::cerr << "Failed to listen on socket. Error: " << WSAGetLastError() << std::endl;
        closesocket(sockfd);
        WSACleanup();
        exit(1);
    }
}
void SocketHandler::initServer() {}

void SocketHandler::acceptConnection() {
    sockaddr_in clientAddr;
    int addrlen = sizeof(clientAddr);
    SOCKET connection = accept(sockfd, reinterpret_cast<struct sockaddr*>(&clientAddr), &addrlen);
    if (connection == INVALID_SOCKET) {
        std::cerr << "Failed to grab connection. Error: " << WSAGetLastError() << std::endl;
        closesocket(sockfd);
        WSACleanup();
        exit(1);
    }

    // Read from the connection
    char buffer[1024];  // Increased buffer size to handle longer requests
    int bytesRead = recv(connection, buffer, sizeof(buffer), 0);
    if (bytesRead > 0) {
        buffer[bytesRead] = '\0';
        std::cout << "The message was: " << buffer << std::endl;

        // Parse the command from the received HTTP request
        std::string request(buffer);

        // Find the starting position of the command in the request
        size_t start_pos = request.find("command=");
        if (start_pos != std::string::npos) {
            start_pos += 8;  // Move past "command="
            size_t end_pos = request.find_first_of("& ", start_pos);

            // Extract the command
            std::string command;
            if (end_pos != std::string::npos) {
                command = request.substr(start_pos, end_pos - start_pos);
            } else {
                command = request.substr(start_pos);
            }

            // Execute the command
            executor.executeCommand(command);
        }
    }

    // Send a message to the connection
    std::string response = "Good talking to you\n";
    send(connection, response.c_str(), static_cast<int>(response.size()), 0);

    // Close the connections
    closesocket(connection);
}


// void SocketHandler::acceptConnection() {
//     sockaddr_in clientAddr;
//     int addrlen = sizeof(clientAddr);
//     SOCKET connection = accept(sockfd, reinterpret_cast<struct sockaddr*>(&clientAddr), &addrlen);
//     if (connection == INVALID_SOCKET) {
//         std::cerr << "Failed to grab connection. Error: " << WSAGetLastError() << std::endl;
//         closesocket(sockfd);
//         WSACleanup();
//         exit(1);
//     }

//     // Read from the connection
//     char buffer[100];
//     int bytesRead = recv(connection, buffer, 100, 0);
//     if (bytesRead > 0) {
//         buffer[bytesRead] = '\0';
//         std::cout << "The message was: " << buffer << std::endl;
//         executor.executeCommand(buffer);
//     }

//     // Send a message to the connection
//     std::string response = "Good talking to you\n";
//     send(connection, response.c_str(), static_cast<int>(response.size()), 0);

//     // Close the connections
//     closesocket(connection);
// }

void SocketHandler::receiveAndExecute() {
    while (true) {
        acceptConnection();
    }
}
