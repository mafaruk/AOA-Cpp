#include <iostream>

int sum(int a, int b){
  return a+b;
}

int main(int argc, char const *argv[]) {
  int(*funptr)(int,int) = &sum;
  std::cout << funptr(5,6);
  return 0;
}
