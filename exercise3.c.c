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
  if (letter > 96 && letter < 123)
  {
     printf("Letter %c", letter);
     printf(" is  small letter\n");
  }
  if(letter > 47 && letter < 58 )
  {
      printf("Letter %c", letter);
      printf(" is not a letter, it is a number ");
  }
  else
  {
      printf("letter %c", letter);
      printf(" is not a letter, it is a special character");
  }
  
  return 0; 
}