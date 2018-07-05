#include <stdio.h>
#include <stdlib.h>


int main() {
    float base, height, area;

  	printf("\nEnter the Base :  ");
  	scanf("%f", &base);

  	printf("\nEnter the Height:  ");
  	scanf("%f", &height);

  	area = (base * height) / 2;
  	printf("\n---------------------------");
    printf("\n         Area Value");
    printf("\n---------------------------");
  	printf("\n= %f\n", area);
  	printf("\n= %.5f\n", area);
  	printf("\n= %.4f\n", area);
  	printf("\n= %.3f\n", area);
  	printf("\n= %.2f\n", area);
  	printf("\n= %.1f\n", area);
  	printf("---------------------------");
  	return 0;
}
