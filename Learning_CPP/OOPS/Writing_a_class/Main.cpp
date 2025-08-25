#include <iostream>

class Log
{
    public:
    enum Level
    {
        LevelError = 0, LevelWarning, LevelInfo
    };

    private:
    Level m_logLevel = LevelInfo; // m_ convention tells us that this is a class member variable which is private

    public:
    void SetLevel(Level level)
    {
        m_logLevel = level;
    }

    void Warn(const char* message)
    {
        if(m_logLevel >= LevelWarning)
        std::cout<<"[WARNING]: "<< message <<std::endl;
    }

    void Info(const char* message)
    {
        if(m_logLevel >= LevelInfo)
        std::cout<<"[Info]: "<< message <<std::endl;
    }

    void Error(const char* message)
    {
        if(m_logLevel >= LevelError)
        std::cout<<"[Error]: "<< message <<std::endl;
    }
};

int main()
{
    Log log;
    // log.SetLevel(log.LogLevelWarning);
    log.SetLevel(Log::LevelError);
    log.Warn("Hello");

    log.Error("Hello");
    log.Info("Hello");
}
