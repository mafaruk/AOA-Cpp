#include <iostream>
class Log
{
public:
  enum Level {
    levelInfo, levelWarning, levelError
  };
  Level m_level = levelInfo;
public:
  void setLevelofWarning(Level level)
  {
    m_level = level;
  }
  void Warn(){
    if(m_level == levelWarning)
    {
      std::cout << "[Warning]" << m_level <<'\n';
    }
  }
  void Error(){
    if(m_level == levelError)
    {
      std::cout << "[Error]" << m_level <<'\n';
    }
  }
  void Info(){
    if(m_level == levelInfo)
    {
      std::cout << "[Info]" << m_level <<'\n';
    }
  }
};

int main(int argc, char const *argv[])
{
  Log log;
  log.setLevelofWarning(Log::levelInfo);
  log.Warn();
  log.Error();
  log.Info();
  return 0;
}
