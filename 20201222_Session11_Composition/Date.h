#ifndef DATE_H
#define DATE_H
class Date{
  public:
    int day;
    int month;
    int year;
  public:
    Date();
    Date(int d, int m, int y);
    void print();
};
#endif /* end of include guard:  */
