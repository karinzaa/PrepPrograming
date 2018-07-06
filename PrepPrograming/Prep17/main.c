#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[20];
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i < 20; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
        printf("%d ", array[i - 2]);
    }
    return 0;
}
