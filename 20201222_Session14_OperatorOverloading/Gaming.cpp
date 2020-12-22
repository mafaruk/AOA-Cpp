#include <iostream>
class Vector2{
public:
  enum levelup {
    normal = 1, medium, high
  };
  float x, y;
  int m_lev;
  Vector2();
  Vector2(levelup);
  Vector2( float x,float y ){
    (*this).x = x;
    (*this).y = y;
  }
  Vector2 operator+(Vector2 other){
     Vector2 result(0,0);
     result.x  = x + other.x;
     result.y = x + other.y;
     return result;
  }

  Vector2 operator*(Vector2 other){
    (*this).x = (*this).x * other.m_lev;
    (*this).y = (*this).y * other.m_lev;
    return *this;
  }
};
Vector2::Vector2(){

}
Vector2::Vector2(levelup l){
  (*this).m_lev = l;
}
int main(int argc, char const *argv[]) {
  Vector2 position(10.00f,20.00f);
  Vector2 speed(50,60);
  Vector2 level(Vector2::medium);
  Vector2 new_position;
  new_position = position + (speed * level);
  std::cout << new_position.x <<" " << new_position.y<< '\n';
  return 0;
}
