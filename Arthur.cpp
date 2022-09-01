#include "Arthur.h"
#include <iostream>
#include <cmath>

double sum(int lB, int hB, double term)
{
  double sum = 0;
  
  for(int i = lB; i < hB; i++)
  {
  sum += term;
  }

  return sum;
}


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

vector vector::operator*(const vector& b)
{
  vector vec;
  vec.direction += this->direction * b.direction;
  vec.magnitude += this->magnitude * b.magnitude;
  return vec;
}

double theta(const vector& a, const vector& b)
{
   double ah = sqrt((pow(a.direction,2) + pow(a.magnitude,2)));
   double bh = sqrt((pow(b.direction,2) + pow(b.magnitude,2)));

   double t = atan2(ah,bh) * 57.2957795;
  return t;
}
