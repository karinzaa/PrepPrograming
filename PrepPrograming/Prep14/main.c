#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float get_radius(float area ){
        float radius_square, radius;
        radius_square = area /M_PI;
        radius = sqrt(radius_square);
        return radius;
}
float circumference(float area)
{
    float radius;
    radius = get_radius(area);
    return 2*M_PI*radius;
}




int main()
{

    float area;
    printf("input area: ");
    scanf("%f", &area);
    printf("circumference is %f",circumference(area));
    return 0;
}