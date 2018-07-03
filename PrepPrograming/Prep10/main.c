#include <stdio.h>
#include <stdlib.h>

float get_tri_area(float base,float height)
{
  float area;
  area = base * height;
  area = area * 1/2;
  return area;
}
  int main()
  {
  float area1;
  area1 = get_tri_area(5,3);
  printf("\n= %f\n", area1);
  }