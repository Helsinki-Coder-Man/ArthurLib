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

double deriv(double x ,double (*func)(double)){
	return (func(x + h) - func(x - h)) / 2*h;
}

double aderiv(double x, double (*func)(double)){
	double pFunc = deriv(x,func);
	return x - func(x)/pFunc;
}

double integral(double (*f)(double x), double a, double b, int n);

double integral(double (*f)(double x), double a, double b, int n){
	double step = (b -a) / n;
	double area = 0.0;
	
	 for(int i = 0; i < n; i++)
	 area += (f(a + (i + 0.5) * step) * step;
	
 return area;
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
   double ah = sqrt(a.direction * a.direction + a.magnitude * a.magnitude);
   double bh = sqrt(b.direction * b.direction + b.magnitude * b.magnitude);

   double t = atan2(ah,bh) * 57.2957795;
  return t;
}
