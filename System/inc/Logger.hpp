#include <string>
#include <vector>

namespace TstBits
{
    #define LOG_FILE_PATH "debug/logs/"
    class Logger
    {
    public:
        Logger();
        ~Logger();
        static void Log(std::string);
        static void LogError(std::string, int=0);
        static void LogWarning(std::string);
        static void SaveLog(std::string="log.txt");
    private:
        static std::vector<std::string> all_messages;
    };
}
