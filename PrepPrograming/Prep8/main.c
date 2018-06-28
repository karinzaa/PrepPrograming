#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ara[100];
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
            ara[i] = 0;
        else
            ara[i] = 1;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%d", ara[i]);
    }
}
