#include <iostream>
//normal way of initializing class members using constructor
class Log{
public:
  int x;
  Log(){
      x = 0;
      std::cout << " Log created  "  ;

  }
  Log(int x){
    (*this).x = x;
    std::cout << " Log created  with parameterized constructor"  ;

  }
  void print(){
    std::cout << this->x << '\n';
  }
};

class Log1{
public:
  int x, y;
  Log l1;// default constructor of Log going to get called even if we dont want to
  Log1()
  {
      x = 0;
      y = 0;
      l1 = Log(5); // parameterized constructor of Log  going to get called
  }
  void print1(){
    std::cout << this->x << " " << this->y << '\n';
  }
};

int main(int argc, char const *argv[]) {
  Log1 l2;
  l2.print1();
  return 0;
}

/* when we use normal way of initialization and try to achive compostion at that time
the default constructor of compostion class is also going get called even if we dont want
to avoid this member initializer are used.*/

/*with this approch we are just wasting cpu cycles on initializing member which we are not going use
or will get changed with actual parameterized constructor is called*/
