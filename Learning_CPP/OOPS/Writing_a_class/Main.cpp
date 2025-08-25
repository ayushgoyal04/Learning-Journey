#include <iostream>

class Log
{
    public:
    enum Level
    {
        LogLevelError = 0, LogLevelWarning, LogLevelInfo
    };
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;


    private:
    int m_logLevel = LogLevelInfo; // m_ convention tells us that this is a class member variable which is private

    public:
    void SetLevel(int level)
    {
        m_logLevel = level;
    }

    void Warn(const char* message)
    {
        if(m_logLevel >= LogLevelWarning)
        std::cout<<"[WARNING]: "<< message <<std::endl;
    }

    void Info(const char* message)
    {
        if(m_logLevel >= LogLevelInfo)
        std::cout<<"[Info]: "<< message <<std::endl;
    }

    void Error(const char* message)
    {
        if(m_logLevel >= LogLevelError)
        std::cout<<"[Error]: "<< message <<std::endl;
    }
};

int main()
{
    Log log;
    // log.SetLevel(log.LogLevelWarning);
    log.SetLevel(log.LogLevelError);
    log.Warn("Hello");

    log.Error("Hello");
    log.Info("Hello");
}
