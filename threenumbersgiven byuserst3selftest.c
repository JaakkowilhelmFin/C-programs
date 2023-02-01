   #include <stdio.h>

int main()
{
    int number1; 
    int number2; 
    int number3; 
    
    printf("Give number 1 ");
    scanf("%d", &number1);
    printf("Give number 2 ");
    scanf("%d", &number2);
    printf("Give number 3 ");
    scanf("%d", &number3);
    
    if ( number1 >=number2 && number1 >= number3)
        printf("Largest number is %d ", number1);
        
    if ( number2 >= number3 && number2 >=number1)
        printf("Largest number is %d ", number2);
    
    if ( number3 >= number1 && number3 >= number2)
        printf("Largest number is %d ", number3);    

    
}
