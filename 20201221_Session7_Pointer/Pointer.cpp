#include <iostream>
//pointer is nothing but an integer which stores the memory loaction or address.
int main(int argc, char const *argv[]) {
  int x = 6;
  //address of x(&x) = 0001

  int* ptr = &x;
  //value of ptr 0001 or address of x(&x)

  std::cout << &ptr << '\n';
  //address of ptr(&ptr) = 0018 & value of ptr = 0001

  std::cout << ptr << ' ' << &x  <<'\n'; //ptr(is value) == &x (is address)

  // getiing value from address is know as derefrencing
  //derefrencing is achived with help of * oprator
  std::cout << *ptr << ' ' << x << '\n';
  // *ptr means = find the value stored at address 0001 which is stored as my value

  *ptr = 10;
  //*ptr = 10 means, change the value stored at address 0001 which is stored as my value
  std::cout << *ptr << ' ' << x << '\n';
  return 0;
}
