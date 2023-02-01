#include <stdio.h>
#include <math.h>
int main()
{
    char username[40] = "Charlie Brown";
    int age = 21; 
    int phone = 23424342; 
    int shoesize = 44; 
    float bankaccount = 34.43; 
    char address[25] = "Willowstreet";
    char gender = 'M';
    
    printf("Name: %s \n", username);
    printf("Gender: %c \n", gender);
    printf("Address: %s \n", address);
    printf("Phone: 050-%d\n", phone);
    printf("Age: %d \n", age);
    printf("Bank balance: %f \n", bankaccount);
    printf("Shoe size: %d \n ", shoesize);
    return 0;
}