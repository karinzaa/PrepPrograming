#include <stdio.h>
#include <stdlib.h>
float a = 9.8;
float g(float t)
{
  return 0.5 * a * (t*t);
  
}
float x(float t)
{
  return a * t;
}
int main()
{
  float t;
  scanf("%f", &t);
  printf("\n= %f\n", g(t));
  printf("\n= %f\n", x(t));
}