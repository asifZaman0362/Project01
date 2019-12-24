#include "inc/Logger.hpp"
#include <iostream>
#include <fstream>

using TstBits::Logger;
std::vector<std::string> all_messages;

Logger::Logger() {}

Logger::~Logger() {
    SaveLog();
}

void Logger::Log(std::string message) {
    std::cout << message << std::endl;
}

void Logger::LogError(std::string error_mssg, int code) {
    if (code == 0)
        std::cout << error_mssg << std::endl;
    else
        std::cerr << error_mssg << "// error code : " << code << std::endl;
}

void Logger::LogWarning(std::string message) {
    std::cout << message << std::endl;
    // Warnings should be showed in the GUI as well!
}

void Logger::SaveLog(std::string file) {
    std::ofstream stream(LOG_FILE_PATH + file);
    for (auto msg : all_messages) {
        stream.write(msg.c_str(), sizeof(char) * msg.length());
        stream.seekp(stream.end);
    }
    stream.flush();
    stream.close();
}