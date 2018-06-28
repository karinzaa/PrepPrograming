#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size[5]= {3, 4, 3, 2, -7};
    int num;
    int i,count=0;
    printf("input number: ");
     scanf("%d", &num);
    for(int i = 0; i< 4; i++ ){
        if(num == size[i]){
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0)
        printf("-1");
}
