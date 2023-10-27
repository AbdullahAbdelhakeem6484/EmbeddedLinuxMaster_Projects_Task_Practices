// execute_commands.cpp
#ifndef SOCKET_HANDLER_H_
#define SOCKET_HANDLER_H_

#pragma once
#include "execute_commands.hh"
#include <winsock2.h>
#include <string>

class SocketHandler {
public:
    SocketHandler(ExecuteCommands& executor);
    void initServer();
    void acceptConnection();
    void receiveAndExecute();

private:
    ExecuteCommands& executor;
    SOCKET sockfd;
    sockaddr_in sockaddr;
};

#endif