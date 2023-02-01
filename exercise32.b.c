#include <stdio.h>

int main()
{
int array[10] = {10, 73, 43, -28, 65, 186, -37, 25, 13, 88};
int i; 
printf("Content of array\n");
   for(i =0 ; i < 10 ; i++) 
   {
       printf("%d",i );
       printf("       ");
       printf("%d\n", array[i]);
   }
        

    return 0;
}