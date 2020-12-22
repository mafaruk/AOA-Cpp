#include <iostream>
class Log{
public:
  int x, y;
  Log(int x, int y);
  int get_add();
  Log get_add(Log &l);
  void print();
};
Log::Log(int x, int y){
  (*this). x = x;
  (*this). y = y;
}
int Log::get_add(){//overloded
  return x + y;
}
Log Log:: get_add(Log &l){//overloded
  (*this). x = (*this). x + (l).x;
  (*this). y = (*this). y + (l).y;
  return *this;
}
void Log:: print(){
  std::cout << x << " " <<y << '\n';
}
int main(int argc, char const *argv[]) {
  Log l1(5,5);
  Log l2(6,6);
  l1.get_add();
  l1.print();
  l2.print();
  l2.get_add(l1);
  l2.print();
  return 0;
}
