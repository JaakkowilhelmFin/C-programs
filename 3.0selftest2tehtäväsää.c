   #include <stdio.h>

int main()
{
    int temp;
    

    
    printf("Give temperature:");
    scanf("%d", &temp);
   
    
    if ( temp <0)
        printf("Freezing weather" );
        
    if ( temp >=0 && temp < 11)
        printf("Very Cold weather" );
        
     if ( temp >= 11 && temp < 21)
        printf("Cold weather" );    
        
    if ( temp >=21 && temp < 31)
        printf("Normal in temp" );
        
    if ( temp >=31 && temp < 41 )
        printf("Its Hot" );
        
    if ( temp >=41 )
        printf("Its Very Hot" );    
        

    
}