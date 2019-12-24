#include <string>
#include <string.h>
#include <vector>
#include <stdio.h>

namespace TstBits
{
    class string : std::string
    {
    public:
        string(const char*);
        string(std::string&);
        string(string&);
        ~string();
        std::vector<string> split(char);
        string operator+(string&);
        string operator+(std::string&);
        string operator+(int);
        string operator+(float);
        string operator+(double);
        //string format(std::string, ...);
    };
}