//incomplete

#include <iostream>
#include <string>
class Log{
public:
  std::string name;
  Log(std::string n){
    name = n;
  }
  void print() {
    std::cout << name << '\n';
  }

};
int main(int argc, char const *argv[]) {

  return 0;
}
