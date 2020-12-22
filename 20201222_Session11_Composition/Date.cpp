#include <iostream>
#include "Date.h"
Date::Date(){

}
Date::Date(int d, int m, int y)
{
  day = d;
  month = m;
  year = y;
}
void Date::print(){
  std::cout << day <<"/"<< month <<"/"<< year <<'\n';
}
