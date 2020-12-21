#include <iostream>
//contains just syntax
int main(int argc, char const *argv[]) {
  //1.
  for (int i = 0/*initilization*/; i < count/* stoping condition*/; i++/* increament condition*/)
  {
    //here i is local variable, accessible within for loop only
  }

  //2.
  int i = 0/*initilization*/ //local to main
  for ( ; i < count/* stoping condition*/; )
  {
    i++/* increament condition*/
  }

  //3.
  for ( ; ; )
  {
    //infinte loop
  }

  //4.
  int j = 0;/*initilization*/
  for ( ; ; ) //infinte loop
  {
    if(j<10){/* stoping condition*/
      break;
    }
    else{
      j++;/* increament condition*/
    }
  }

  //1. while
  int k = 0;
  while (k<10/* condition */) {
    k++;/* increament condition*/
  }

  //2. while
  while (/* condition */) {
    /* code */
  }

  do {
    //perform the operation then check for the condition
    //execute once even if condition is false
  } while(/* condition */);

  return 0;
}
