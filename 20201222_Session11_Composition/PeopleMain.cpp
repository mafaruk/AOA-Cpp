#include <iostream>
#include "People.h"
int main(int argc, char const *argv[]) {
  Date d1(12,06,2000);
  People p1("mafaruk", "xyz",d1);
  p1.get_name();
  p1.get_add();
  p1.get_date();
  return 0;
  return 0;
}
