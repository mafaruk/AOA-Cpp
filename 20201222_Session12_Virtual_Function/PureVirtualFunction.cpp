#include <iostream>
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
  void set_status(infoState status) {
      if(status == levelInfo){
        info();
      }else if (status == levelWarn) {
        warn();
      } else if (status == levelError) {
        error();
      }
  }
};
int main(int argc, char const *argv[]) {
  LogStack ls;
  ls.set_status(LogStack::levelInfo);
  return 0;
}
