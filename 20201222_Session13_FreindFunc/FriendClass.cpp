#include <iostream>
class A{
private:
  int x;
  friend class B;
};
class B{
public:
  void show(A &a, int x){
    a.x = x;
    std::cout << a.x << '\n';
  }
};
int main(int argc, char const *argv[]) {
  A a1;
  B b1;
  b1.show(a1, 10);
  return 0;
}
