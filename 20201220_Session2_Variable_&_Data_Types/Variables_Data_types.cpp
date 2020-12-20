#include <iostream>
int main(int argc, char const *argv[]) {
  char var = 'A';
  char asciVar = 65;
  int integerVar = 5;
  bool boolVar = true;
  float pi  = 3.14f;

  std::cout << "char var = 'A'; is "; std::cout << var << '\n';
  std::cout << "char asciVar = 65; is "; std::cout << asciVar << '\n';
  std::cout << "int integerVar = 5; is "; std::cout << integerVar << '\n';
  std::cout << "bool boolVar = true; is "; std::cout << boolVar << '\n';
  std::cout << "float pi  = 3.14f; is ";std::cout << pi << '\n';

  std::cout << "\nsizeof operator or function" << '\n';
  std::cout << "size of int = sizeof(int) =  "<< sizeof(int) << '\n';
  std::cout << "size of short int = sizeof(short int) =  "<< sizeof(short int) << '\n';
  std::cout << "size of long long int = sizeof(long long int) =  "<< sizeof(long long int) << '\n';
  std::cout << "size of char = sizeof(char) =  "<< sizeof(char) << '\n';
  std::cout << "size of Boolean = sizeof(bool) =  "<< sizeof(bool) << '\n';
  return 0;
}
