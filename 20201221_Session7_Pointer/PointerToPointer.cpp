#include <iostream>
//pointer is nothing but an integer which stores the memory loaction or address.
int main(int argc, char const *argv[]) {
  int x = 6;
  //address of x(&x) = 0001

  int* ptr = &x;
  //value of ptr 0001 or address of x(&x)
  //address of ptr (&ptr) = 0018

  int** ptrtoptr = &ptr;
  //first *(from right) will derefrence the value at add 0018 which is 0001
  //second * will derefrence value at add 0001 which is 6

  //ptrtoptr :- 0018 //address of ptr(&ptr)
  //*ptrtoptr :- 0001 //value at add 0018 which address of x(&x) = 0001
  //**ptrtoptr :- 6 //value at 0001 which is value of x = 6;

  std::cout << ptrtoptr << " "<< &ptr<< '\n';//0018 must be same
  std::cout << *ptrtoptr << " "<< ptr<< " " << &x <<'\n';//0001 must be same
  std::cout << **ptrtoptr << " "<< *ptr<< " " << x <<'\n';//6 must be same 

  **ptrtoptr = 10;
  //above statement mean change the value at 0018 value of 0001 (indirectly value of x)
  std::cout << ptrtoptr << " "<< &ptr<< '\n';//0018 must be same
  std::cout << *ptrtoptr << " "<< ptr<< " " << &x <<'\n';//0001 must be same
  std::cout << **ptrtoptr << " "<< *ptr<< " " << x <<'\n';//10 must be same

  return 0;
}
