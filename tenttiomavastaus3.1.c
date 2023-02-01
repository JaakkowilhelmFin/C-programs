#include <stdio.h>

int main(void)
{
int numberofrows, i, j;
printf("Input rows: ");
scanf("%d", &numberofrows);

for (i = 1; i <= numberofrows; i++) {
    for (j = 1; j <= i; j++) {
        printf("%d",i);
    }
    printf("\n");
}
return 0;

}