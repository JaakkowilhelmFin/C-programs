 #include <stdio.h>

int main()
{
  
  int x, y;

    printf("Give coordinate point in format (x,y): ");
    scanf("(%d, %d)", &x, &y);

    if (x > 0 && y > 0) {
        printf("The coordinate point (%d", x );
        printf(",%d",y);
        printf(")");
        printf(" lies in the second quadrant.");
    } else if (x < 0 && y > 0) {
        printf("The coordinate point (%d", x );
        printf(",%d",y);
        printf(")");
        printf(" lies in the first quadrant.");
    } else if (x < 0 && y < 0) {
        printf("The coordinate point (%d", x );
        printf(",%d",y);
        printf(")");
        printf(" lies in the third quadrant.");
        
    } else if (x > 0 && y < 0) {
        printf("The coordinate point (%d", x );
        printf(",%d",y);
        printf(")");
        printf(" lies in the fourth quadrant.");
        
    } else if (x == 0 && y == 0) {
        printf("The point is the origin.");
    } else if (x == 0) {
        printf("The point lies on the y-axis.");
    } else if (y == 0) {
        printf("The point lies on the x-axis.");
    }
  
   return 0;  
}

