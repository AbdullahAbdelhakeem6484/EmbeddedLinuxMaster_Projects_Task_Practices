/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 22, 2023
* Description: Create class to handle Logs with different Levels and Store Msgs for dump and Clear the buffer
*
* Type: Task
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
*   1.
*
* Note:
*******************************************************/
#include<iostream>
#include <string>
#include <vector>
enum class LogLevel{
    INFO,
    WARNING,
    ERR
};

struct LogMessage{
    LogLevel level;
    std::string message;
};

class LogHandler{
    private:
        std::vector<LogMessage> logBuffer;

    public:
        void log(LogLevel l ,const  std::string& msg)
        {
            logBuffer.push_back({l, msg});
        }

        void dump() const{
            for(const auto & msg : logBuffer)
            {
                std::string levelStr;
                switch(msg.level)
                {
                    case LogLevel::INFO:
                        levelStr = "INFO";
                        break;
                    case LogLevel::WARNING:
                        levelStr = "WARNING";
                        break;
                    case LogLevel::ERR:
                        levelStr = "ERR";
                        break;
                    default:
                        levelStr = "UNKNOWN";
                }
                std::cout << "[" << levelStr << "] " << msg.message << "\n";


            }
        }

        void clear(){
            logBuffer.clear();
        }
};


int main(){
    LogHandler logger;
    logger.log(LogLevel::INFO,"Info Message" );
    logger.log(LogLevel::WARNING,"WARNING Message" );
    logger.log(LogLevel::ERR,"ERR Message" );

    std::cout << "Log Messages:\n";
    logger.dump();

    logger.clear();
    std::cout << "\nLog buffer cleared.\n";
    return 0;
}
