#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int k = i; k < rows; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}