#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    for(int i = - 360;i <=360 ; i = i +90){
        printf("sin = %f  cos = %f  tan %f \n" , sin(i), cos(i), tan(i));
    }
}