#include <iostream>

int sum(int a, int b){
  return a+b;
}

int main(int argc, char const *argv[]) {
  typedef int(*funptr)(int,int);
  funptr fun = &sum;

  std::cout << fun(5,6);
  return 0;
}
