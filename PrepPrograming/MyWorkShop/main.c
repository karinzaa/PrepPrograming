#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    switch(num){
        case 1:
            printf ("number is 1");
            break;
        case 2:
            printf ("number is 2");
            break;
        case 3:
            printf ("number is 3");
            break;
        case 4:
            printf ("number is 4");
            break;
        default:
            printf("Unknown number");
    }
    return 0;
}
