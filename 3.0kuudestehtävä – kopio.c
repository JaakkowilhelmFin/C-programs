#include <stdio.h>

int main() {
    int i, sum = 0;
    float avg;
    int array[10];
    for(i=0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    
        sum +=array[i]; 
    }

    avg = (float)sum / 10;
    printf("sum=%d", sum);
    printf("avg=%.2f",avg);

    return 0;
}