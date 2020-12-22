#include <iostream>
class NotEqualOperator{
public:
  int x;
  bool operator!(){
    if (this->x == 9){
      return true;
    }
    else
    {
      return false;
    }
  }
};

int main(int argc, char const *argv[]) {
  NotEqualOperator n;
  n.x = 10;
  std::cout <<  !n << '\n';
  return 0;
}
