#include <iostream>
//by default class variables are private not accessible out side class
class Player {
  public://public: makes the accessible to everyone
    int x;  int y;
  int speed;
};
int main(int argc, char const *argv[]) {
  Player player1;
  player1.x = 10;
  return 0;
}
