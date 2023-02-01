#include <stdio.h>

int main()
{
    float a;
    printf("give number 1:");
    scanf("%f", &a);
    
    float b;
    printf("give number 2:");
    scanf("%f", &b);
    
    printf("User did input number%2.f ", a);
    printf(" and %2.f", b);
    
    if (a>b)
    {
        printf(" and the bigger number is%2.f ", a);
    }
    else
    {
        printf(" and the bigger one is%2.f ", b);
    }
    return 0; 
}

