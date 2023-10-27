// main.cpp

#include "socket_handler.hh"
#include "execute_commands.hh"

int main() {
    ExecuteCommands executor;
    SocketHandler server(executor);

    // Initialize server
    server.initServer();

    while (true) {
        // Accept connection
        server.acceptConnection();

        // Receive and execute commands
        server.receiveAndExecute();
    }

    return 0;
}
