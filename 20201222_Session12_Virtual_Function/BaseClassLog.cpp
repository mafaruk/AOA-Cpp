#include <iostream>
class Base{
  private:
    int x;
  public:
    void set_x(int x) {
      this->x = x;
    }
    int get_x(){
      return x;
    }
    virtual void print(){
      std::cout << get_x() << '\n';
    }
};
