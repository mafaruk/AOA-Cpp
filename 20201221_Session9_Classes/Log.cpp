#include <iostream>
class Log
{
public:
  int levelofWarning = 2;
  int levelofError = 1;
  int levelofInfo  = 0;
  int m_level;
public:
  setLevelofWarning(int level)
  {
    m_level = level;
  }
  void Warn(){
    if(m_level == levelofWarning)
    {
      std::cout << "[Warning]" << m_level <<'\n';
    }
  }
  void Error(){
    if(m_level == levelofError)
    {
      std::cout << "[Error]" << m_level <<'\n';
    }
  }
  void Info(){
    if(m_level == levelofInfo)
    {
      std::cout << "[Info]" << m_level <<'\n';
    }
  }
};

int main(int argc, char const *argv[])
{
  Log log;
  log.setLevelofWarning(log.levelofError);
  log.Warn();
  log.Error();
  log.Info();
  return 0;
}
