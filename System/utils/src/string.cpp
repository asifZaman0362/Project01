#include "inc/string.hpp"

using namespace TstBits;

string::string(const char* data) {
    this->data = std::string(data);
}

string::string(std::string& other) {
    this->data = other;
}

string::string(string& other) {
    this->data = other.data;
}

string::~string() {}

std::vector<string> string::split(char delimiter)
{
    int len = length();
    const char* cstr = c_str();
    std::vector<string> out;
    std::string builder = "";
    for (int i = 0; i < len; i++)
    {
        if (cstr[i] == delimiter && builder.length() > 0) {
            out.push_back(builder);
            builder = "";
        } else builder += cstr[i];
        out.push_back(builder);
    }
    return out;
}

string string::operator+(string& other) {
    return string(this->data + other.data);
}

string string::operator+(std::string& other) {
    return string(this->data + other.data);
}

string string::operator+(int right) {
    return string(this->data + std::to_string(right));
}

string string::operator+(float right) {
    return string(this->data + std::to_string(right));
}

string string::operator+(double right) {
    return string(this->data + std::to_string(right));
}

// string string::format(std::string x_format, ...)
// {
//     std::string builder = "";
//     const char* arr = x_format.c_str();
//     for (int i = 0; i < x_format.length(); i++) {
//         if (arr[i] == '%') {
//             if (i < x_format.length()-1) {
//                 switch(arr[i+1]) {
//                     case 'd':
                        
//                 }
//             }
//         }
//     }
// }
