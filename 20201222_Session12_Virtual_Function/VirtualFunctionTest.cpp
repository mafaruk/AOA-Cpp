#include <iostream>
#include "BaseClassLog.cpp"
class Derived:public Base{
private:
  int y;
public:
  void set_y(int y) {
    this->y = y;
  }
  int get_y(){
    return y;
  }
  void print() override{
    std::cout << get_y()*get_x() << '\n';
  }
};
int main(int argc, char const *argv[]) {
  Derived d1;
  d1.set_x(5);
  d1.set_y(10);
  d1.print();
  Base *b1 = &d1;
  b1->print();
  return 0;
}
