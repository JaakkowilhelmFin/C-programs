#include <stdio.h>

int main()
{
   
   int l;
   int i; 
   printf("Give me a number: ", l);
   scanf("%d", &l);
   printf("the multiplication table for %d", l);
   printf(" is : ");
    for(i = 0 ; i<11 ; i++)
    {
     int multi=i*l;
    printf("%d",i);
    printf(" * %d",l);
    printf(" = %d \n", multi);
     }

    return 0;
}