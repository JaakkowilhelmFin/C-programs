#include <stdio.h>

int main(void)
{
  int i,j;
  int r;

  printf("Input rows: ");
  scanf("%d",&r);

printf("\n");

  for(i=1;i<r+1;i++)
    {
      for(j=0;j<i;j++)
        printf("%d",i);
      printf("\n");
    }
}