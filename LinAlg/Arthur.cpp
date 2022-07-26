#include "Arthur.h"



vector::vector(double d, double m) : direction(d), magnitude(m) {}

vector::vector()
{
  magnitude = 0;
  direction = 0;
}


vector vector::operator+(const vector& b)
{
  vector vec;
  vec.direction = this->direction + b.direction;
  vec.magnitude = this->magnitude + b.magnitude;
  return vec;
}

vector vector::operator*(const int b)
{
  vector vec;
  vec.direction = this->direction * b;
  return vec;
}
