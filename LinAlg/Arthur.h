struct vector
{
  double direction,magnitude;
  
  vector(double d, double m);
  vector();  
  
  vector operator+(const vector& b);
  vector operator*(const int b);
};


struct matrix
{
  
};
