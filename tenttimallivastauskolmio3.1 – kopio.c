#include <stdio.h>


int main() {
    int angle1, angle2, angle3;
    printf("Give three angles separated by space: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    
    

    if (angle1 + angle2 + angle3 == 180) {
        printf("Angles make a triangle");
    } else {
        printf("Angles don't make a triangle");
    }

    return 0;
}
