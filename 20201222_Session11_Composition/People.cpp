#include <iostream>
#include "People.h"
People::People(const char* name, const char* add, Date d)
{
  this->name = name;
  this->add = add;
  this->d1 = d;
}

void People::get_name()
{
  std::cout << name << '\n';
}

void People::get_add()
{
  std::cout << add << '\n';
}

void People::get_date(){
  d1.print();
}
