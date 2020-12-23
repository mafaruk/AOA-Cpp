#include <iostream>
//normal way of initializing class members using constructor
class Log{
public:
  int x, y;
  Log(){
      x = 0;
      y = 0;
  }
  Log(int x,int y){
    (*this).x = x;
    (*this).y = y;
  }
  virtual void print(){
    std::cout << this->x <<" "<< this->y <<'\n';
  }
};
//member initializing constructor
class Log1:public Log {
public:
  int x, y, z;
  Log1()
    : x(0),y(0),z(0)// must be specified in order how they declared in
    {
    }
  Log1(int x, int y, int z)
    : x(x), y(y), z(z)
    {
    }
  void print() override{
    std::cout << this->x << " " << this->y << " " << this->z<< '\n';
  }
};

int main(int argc, char const *argv[]) {
  Log l1(10,10);
  l1.print();
  Log1 l2(10,20,30);
  l2.print();
  return 0;
}
