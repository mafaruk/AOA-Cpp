#include <iostream>
//by default class variables are private not accessible out side class
class Player {
  public://public: makes the accessible to everyone
  int x;  int y;
  int speed;

  void Move(int xa, int ya){
      x += xa * speed;
      y += ya * speed;
  }
  
};
int main(int argc, char const *argv[]) {
  Player player1;
  player1.x = 10;
  player1.y = 20;
  player1.speed = 8;
  player1.Move(1,1);
  std::cout << player1.x << '\n';
  std::cout << player1.y << '\n';
  return 0;
}
