#include <iostream>

class Log{
public:
  int x;
  Log(){

  }
  Log(int x){

  }
};
int main(int argc, char const *argv[]) {
//static onject creation //created on stack
  Log l1;
  Log l2(5);
  Log l3 = Log();
  Log l4 = Log(5);
//dynamic object create //created on heap .//need to deallocate manually
  Log *lptr = new Log();
  Log *lptr1 = new Log(5);
  //(*lptr1).datamembers;
  //(*lptr1).function();
  delete lptr1;
  lptr1->x = 10;
  std::cout << lptr1->x << '\n';
  delete lptr1;
  lptr1->x = 10;
  std::cout << lptr1->x << "deallocate" <<'\n';
  //lptr1->datamembers;
  //lptr1->function();

  return 0;
}
