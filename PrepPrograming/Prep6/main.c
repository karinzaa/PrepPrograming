#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Number 1
   int i;
   for( i = 100 ; i >= 50 ; i = i - 1){
       if(i >= 51)
         printf("%d," ,i);
       else
         printf("%d" ,i);
   }
    printf("\n");
}
