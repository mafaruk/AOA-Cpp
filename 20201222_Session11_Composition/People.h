#ifndef PEOPLE_H
#define PEOPLE_H
#include "Date.h"
class People{
  public:
    const char* name;
    const char* add;
    Date d1;
  public:
    People(const char* name, const char* add, Date d);
    void get_name();
    void get_add();
    void get_date();
};

#endif /* end of include guard:  */
