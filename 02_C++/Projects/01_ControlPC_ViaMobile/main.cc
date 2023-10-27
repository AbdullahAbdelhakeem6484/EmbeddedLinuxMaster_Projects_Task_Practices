/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: October 5, 2023
* Description: Test all functions of STL
*
* Type: Project
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs:
* Outputs:
*
* Algorithm:
*   Server Requirements:
*       01- Open Socket
*       02- Receive Requests that will coming
*       03- parse the Request
*       04- check the cody of Request {
*           - if need open calculator ---> turn on calculator
*           - if need shut down ---? shut down
*           }
*       05 Execute
*
*    Client Requirements:
*        01 - download mobile application(as a client for my server)  (API Tester)
*
* Note:
*******************************************************/
// #include "socket_handler.hh"
// #include "execute_commands.hh"

// int main() {
//     ExecuteCommands executor;
//     SocketHandler server(executor);

//     // Initialize server
//     server.initServer();

//     while (true) {
//         // Accept connection
//         server.acceptConnection();

//         // Receive and execute commands
//         server.receiveAndExecute();
//     }

//     return 0;
// }
/******************************************/





#include <iostream>
#include <string>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

int main() {
    WSADATA wsaData;
    int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (result != 0) {
        std::cerr << "WSAStartup failed with error: " << result << std::endl;
        return 1;
    }

    // Create a socket (IPv4, TCP)
    SOCKET sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sockfd == INVALID_SOCKET) {
        std::cerr << "Failed to create socket. Error: " << WSAGetLastError() << std::endl;
        WSACleanup();
        return 1;
    }

    // Listen to port 9999 on any address
    sockaddr_in sockaddr;
    sockaddr.sin_family = AF_INET;
    sockaddr.sin_addr.s_addr = INADDR_ANY;
    sockaddr.sin_port = htons(9999);

if (bind(sockfd, reinterpret_cast<struct sockaddr*>(&sockaddr), sizeof(sockaddr)) == SOCKET_ERROR) {
        std::cerr << "Failed to bind to port 9999. Error: " << WSAGetLastError() << std::endl;
        closesocket(sockfd);
        WSACleanup();
        return 1;
    }

    // Start listening. Hold at most 10 connections in the queue
    if (listen(sockfd, 10) == SOCKET_ERROR) {
        std::cerr << "Failed to listen on socket. Error: " << WSAGetLastError() << std::endl;
        closesocket(sockfd);
        WSACleanup();
        return 1;
    }

    // Grab a connection from the queue
    sockaddr_in clientAddr;
    int addrlen = sizeof(clientAddr);
    SOCKET connection = accept(sockfd, reinterpret_cast<struct sockaddr*>(&clientAddr), &addrlen);
    if (connection == INVALID_SOCKET) {
        std::cerr << "Failed to grab connection. Error: " << WSAGetLastError() << std::endl;
        closesocket(sockfd);
        WSACleanup();
        return 1;
    }

    // Read from the connection
    char buffer[100];
    int bytesRead = recv(connection, buffer, 100, 0);
    if (bytesRead > 0) {
        buffer[bytesRead] = '\0';
        std::cout << "The message was: " << buffer;
    }

    // Send a message to the connection
    std::string response = "Good talking to you\n";
    send(connection, response.c_str(), static_cast<int>(response.size()), 0);

    // Close the connections
    closesocket(connection);
    closesocket(sockfd);
    WSACleanup();

    return 0;
}
