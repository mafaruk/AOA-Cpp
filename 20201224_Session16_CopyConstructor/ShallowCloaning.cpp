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
  ~Log(){
    std::cout << "Destructor" << '\n';
    delete this;
    std::cout << this->name << '\n';
  }
};
int main(int argc, char const *argv[]) {
  Log* l = new Log("unknow");
  Log* l2 = l;
  (*l).print();
  (*l2).name[0] = 'm';
  (*l2).print();
  (*l).print();
  return 0;
}/*shallow cloning means to object pointing to same memory location so changing value of
one object will automatically affect other object as well;*/
