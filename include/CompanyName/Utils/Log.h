#include <stdarg.h>

// This is seemingly currently unused in release. may add functionality later.
namespace CompanyName::Utils::Log
{
    char* fileName_;
    int logLevel_;
    char* buffer_;

    void EndFile();
    void BeginFile();

    void SetFileName(char* fileName, unsigned int fileLength);
    char* GetFileName();

    void SetLogLevel(int logLevel);
    int GetLogLevel();

    void PrintF(int logLevel, const char* format, ...);

    void Print(int logLevel, const char* format, ...);
    void Temp(const char* format, ...);
    void Info(const char* format, ...);
    void Warning(const char* format, ...);
    void Error(const char* format, ...);
}