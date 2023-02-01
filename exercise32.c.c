#include <stdio.h>

int main()
{
int array[10];  
int i ; 
int j;
float avg;
float sum; 
int numbers = 10;
printf(" enter 10 numbers \n", j);


   for(j = 0 ; j < 10 ; j++) 
   {
        printf("%d  ",j+1 );
       scanf("%d", &array[j]);
       sum += array[j];
   }
      printf("The mean value of numbers [" ); 
   for(i =0 ; i < 9 ; i++) 
   {
      
       printf("     ");
       printf("%d ", array[i]);
   }
      printf("    ");
      printf( "%d ", array[9]);  
      printf(" ]");
      avg = sum / numbers;
      printf(" is %.3f  ", avg);

    return 0;
}