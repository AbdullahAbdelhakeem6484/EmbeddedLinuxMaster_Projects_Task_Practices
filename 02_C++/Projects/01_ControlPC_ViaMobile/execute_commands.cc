#include "execute_commands.hh"
#include <iostream>
#include <algorithm>
#include <cstdlib>

ExecuteCommands::ExecuteCommands() {}

void ExecuteCommands::executeCommand(const std::string& command) {
    // Convert the command to lowercase and remove whitespaces
    std::string parsedCommand = command;
    // Convert to lowercase
    std::transform(parsedCommand.begin(), parsedCommand.end(), parsedCommand.begin(), ::tolower);
    // Remove whitespaces
    parsedCommand.erase(std::remove_if(parsedCommand.begin(), parsedCommand.end(), ::isspace), parsedCommand.end());

    // Execute shell command based on the parsed command
    if (parsedCommand == "shutdown") {
        std::cout << "Executing shutdown command..." << std::endl;
        system("shutdown /s /t 0");  // Shutdown immediately
    } else if (parsedCommand == "calculator") {
        std::cout << "Executing calculator command..." << std::endl;
        system("calc");  // Open calculator
    } else if (parsedCommand == "firefox") {
        std::cout << "Executing Firefox command..." << std::endl;
        system("start firefox");  // Open Firefox
    } else {
        std::cout << "Unknown command: " << parsedCommand << std::endl;
    }
}