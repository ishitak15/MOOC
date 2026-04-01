#include <stdio.h>

int main() {
    int radius;
    float area;
    const float PI = 3.14;

    printf("Enter the radius of the circle (integer): ");
    scanf("%d", &radius);

    
    area = PI * radius * radius;

    
    printf("The area of the circle with radius %d is: %.2f\n", radius, area);

    return 0;
}
