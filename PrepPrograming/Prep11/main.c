#include <stdio.h>
#include <stdlib.h>
float cube(float base)
{
  float cube;
  cube = base * base * base;
  return cube;
}
int main()
{
  float cube1, cube2;
  cube1 = cube(10);
  cube2 = cube(-2);
  printf("\n= %.0f\n", cube1);
  printf("\n= %.0f\n", cube2);
}