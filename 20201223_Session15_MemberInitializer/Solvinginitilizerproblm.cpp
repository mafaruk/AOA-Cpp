#include <iostream>
//normal way of initializing class members using constructor
class Log{
public:
  int x;
  Log(){
      x = 0;
      std::cout << " Log created  "  ;
  }
  Log(int x){
    (*this).x = x;
    std::cout << " Log created  with parameterized constructor"  ;
  }
  void print(){
    std::cout << this->x <<" Log class" <<'\n';
  }
};

class Log1{
public:
  int x, y;
  Log l1; // will not be get called with member initializer approch
  Log1(int x, int y, Log l1)
    : x(x), y(y), l1(l1)
  {
    l1.print();
    print1();
  }
  void print1(){
    std::cout << this->x << " " << this->y << " Log1 class \n";
  }
};

int main(int argc, char const *argv[]) {
  Log l(5);
  Log1 l2(10,20,l);
  return 0;
}
