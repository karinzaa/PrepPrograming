#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, n3;

    printf("Enter number: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2)
    {
        if (n1 >= n3)
            printf("[%.2lf Is max number.]", n1);
        else
            printf("[%.2lf Is max number.]", n3);
    }
    else
    {
        if (n2 >= n3)
            printf("[%.2lf Is max number.]", n2);
        else
            printf("[%.2lf Is max number.]", n3);
    }
    if (n1 <= n2)
    {
        if (n1 <= n3)
            printf(" [%.2lf Is min number.]", n1);
        else
            printf(" [%.2lf Is min number.]", n3);
    }
    else
    {
        if (n2 <= n3)
            printf(" [%.2lf Is min number.]", n2);
        else
            printf(" [%.2lf Is min number.]", n3);
    }

    return 0;
}
