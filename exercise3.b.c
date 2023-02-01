#include <stdio.h>
int main(void)
{

char letter;
printf("Give me a letter: ");
scanf("%c",&letter);
printf("%c ", letter);

  if ( letter > 64 && letter < 91 ) 
  {
     printf(" Letter %c ", letter);
     printf("is capital letter");
  }
  else
  {
     printf("Letter %c", letter);
     printf(" is  small letter or something else \n");
  }
  
  return 0; 
}