#include <iostream>
//refrencing is used to create same memory address(refrence) for multiple variable
int main(int argc, char const *argv[]) {
  int a = 2;
  int b = 5;
  int& ref = a;
  // &ref & &a must be same now
  int& refref = ref;
  &ref = &b;

  std::cout << "&a = " << &a << "  &ref = " << &ref << " &refref = " << &refref <<'\n';
  std::cout << "a = " << a << "  ref = " << ref << " refref = " << refref <<'\n';
  return 0;
}
