#include <iostream>
#include <string>
#include <cstring>
class Log{
public:
  std::string name;
  Log(){

  }
  Log(std::string n){
    name = n;
  }
  Log(Log& l){
    this->name = l.name;
  }
  void print() {
    std::cout << name << '\n';
  }
  Log& operator=(Log& l){
    this->name  = l.name;
    return *this;
  }
};
int main(int argc, char const *argv[]) {
  Log l("mak");
  Log l2(l);
  Log l3;
  l2.name[0] = 'n';
  l.print();
  l2.print();
  l3 = l2;
  l3.name[1] = 'e';
  l3.print();
  l2.print();
  return 0;
}
