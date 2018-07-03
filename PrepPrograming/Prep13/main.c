#include <stdio.h>
#include <stdlib.h>

int formula(int a, int b)
{
  if (a > b)
    return a;
  return b;
}

int main()
{
  int a, b, c, max_ab, max_abc;
  printf("Input 2 numbers:");
  scanf("%d %d", &a, &b);
  max_ab = formula(a, b);
  printf("Input number:");
  scanf("%d", &c);
  max_abc = formula(max_ab, c);
  printf("%d", max_abc);
  return 0;
}
