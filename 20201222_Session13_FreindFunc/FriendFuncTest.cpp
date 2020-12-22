#include <iostream>
class Log{
  private:
    int x;
  friend void set_x(Log &l,int x);
};
void set_x(Log &l, int x) {
  l.x = x;
  std::cout << l.x << '\n';
}
int main(int argc, char const *argv[]) {
  Log l1;
  set_x(l1, 10);
  return 0;
}
