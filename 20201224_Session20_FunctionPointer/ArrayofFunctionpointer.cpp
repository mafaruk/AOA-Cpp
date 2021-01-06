#include <iostream>

int sum(int a, int b){
  return a+b;
}
int multi(int a, int b){
  return a*b;
}
int sub(int a, int b){
  return a-b;
}
int main(int argc, char const *argv[]) {
  typedef int(*funptr)(int,int);
  funptr fun[] = {sum,multi,sub};

  std::cout << "sum of 5 & 6 = "<<fun[0](5,6)<<"\n";
  std::cout << "multiplication of 5 & 6 = "<<fun[1](5,6)<<"\n";
  std::cout << "subtraction of 5 & 6 = "<<fun[2](5,6)<<"\n";
  return 0;
}
