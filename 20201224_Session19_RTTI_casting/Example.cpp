#include <iostream>
class Log{
public:
  int a;
  int y;
  Log(int x, int y)
  :a(x), y(y)
  {

  }
};
int main(int argc, char const *argv[]) {
  double d = (int)(5.44656) + 5.26; //c style casting
  std::cout << d << '\n';
  double a = static_cast<int>(6.4565) + 5.26; //static_cast at compile time
  std::cout << a << '\n';
  // double c = dynamic_cast<int>(7.898) + 5.26; //dynamic_cast at run time
  // std::cout << c << '\n';
  {
    int m = 5;
    const int* x = &m;
    int* y = const_cast<int*>(x);
    *y = 8;
    std::cout << *x << '\n';
  }
  Log l1(5,6);
  int* l  = reinterpret_cast<int*>(&l1);
  std::cout << *l << '\n';
  return 0;
}
