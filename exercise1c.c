#include <stdio.h>
int main()
{
    float height;
    
    printf("Enter height: ");
    scanf("%f", &height);
    
    float width;
    printf("Enter width: ");
    scanf("%f", &width);
    
    float rectangle_perimeter =  (width + width + height + height);
    float rectangle_area = (height * width); 
    
    printf("A rectangle, of which height is %.2f ", height );
    printf(" cm and width is %.2f ", width );
    printf("cm \n");
    printf("the perimeter is equal to %.2f ", rectangle_perimeter);
    printf("cm \n");
    printf("the area is equal to %.2f ", rectangle_area);
    printf("square cm");

    return 0;
}