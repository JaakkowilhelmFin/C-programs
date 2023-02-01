#include <stdio.h>
int main()
{
    char forename[30];
    printf("give forename: ");
    scanf("%s", forename);
    char familyname[30];
    printf("give familyname: ");
    scanf("%s", familyname);

   char gender;
   printf("give gender (M,F or O):");
   scanf(" %c",&gender);
   
   int age;
   printf("give age: ");
   scanf("%d", &age);
   
   float shoe_size;
   printf("give shoe size: ");
   scanf("%f", &shoe_size);
   
   float account;
   printf("give you bank account balance $: ");
   scanf("%f", &account);
   
   char phone[14];
   printf("give your phone number in international form: ");
   scanf("%s", phone);
   
   char addres[50];
   printf("Give your addres: ");
   scanf("%s", addres);
   
    printf("Name: %s ", forename );
    printf("%s\n", familyname);
    
    printf("Gender: %c \n", gender);
    
    printf("Address: %s \n", addres);
    printf("Phone: %s \n", phone);
    printf("Age: %d \n", age);
    printf("Bank balance: %f \n", account);
    printf("Shoe size: %f \n ", shoe_size);
    
    return 0;
}
