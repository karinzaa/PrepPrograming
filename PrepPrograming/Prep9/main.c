#include <stdio.h>
#include <stdlib.h>

int main()
{
  float max = 0, min = 100000, avg = 0;
  float ara[20];
  for (int i = 0; i < 20; i++)
  {
    scanf("%f", &ara[i]);
    if (ara[i] > max)
    {
      max = ara[i];
    }
    if (ara[i] < min)
    {
      min = ara[i];
    }
    avg = avg + ara[i];
  }
  avg = avg / 20;
  printf("max:%f", max);
  printf("min:%f", min);
  printf("avg:%f", avg);
  return 0;
}