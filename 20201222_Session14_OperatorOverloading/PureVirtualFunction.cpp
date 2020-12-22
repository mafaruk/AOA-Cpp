#include <iostream>
#include <string>
class Log{
  virtual void error() = 0;// pure virtual function
  virtual void warn() = 0;
  virtual void info() =0;
};
class LogStack:public Log{
public:
  enum infoState {
    levelInfo, levelError, levelWarn
  };
  int state;
private:
  void error(/* arguments */) {
    std::cout << "[Error]" << '\n';
  }
  void warn(/* arguments */) {
    std::cout << "[Warning]" << '\n';
  }
  void info(/* arguments */) {
    std::cout << "[Information]" << '\n';
  }
public:
    std::string operator!(){
    if (this->state == levelInfo){
      info();
    }
    else if (this->state == levelWarn) {
      warn();
    }
    else if(this->state == levelError){
      error();
    }
  }

};
int main(int argc, char const *argv[]) {
  LogStack ls;
  ls.state = LogStack::levelError;
  std::cout << !ls << '\n';
  return 0;
}
