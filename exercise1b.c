#include <stdio.h>
#include <math.h>
int main()
{
    int rectangle_height = 7;
    int rectangle_width = 5; 
    int divider = 2; 
    int rectangle_perimeter = 5*2 + 7*2; 
    int rectangle_area = (rectangle_height *rectangle_width) ; 
    
    printf("A rectangle, of which height is 7 cm and width is 5cm \n");
    printf("the perimeter is equal to %.2d ", rectangle_perimeter);
    printf("cm \n");
    printf(" the area is equal to %.2d " , rectangle_area);
    printf(" square cm ");

    return 0;
}