#include <iostream>
#include "Log.h" //user define header are include using "" double quotes 
void initlog(){
    Log("Hello World!");
}
void Log(const char* msg){
  std::cout << msg << '\n';
}
