#include <iostream>
template <typename T>
T print(T a){
  return a * a;
}
int main(int argc, char const *argv[]) {
  std::cout << print(5) << '\n';
  std::cout << print(5.5f) << '\n';
  return 0;
}
