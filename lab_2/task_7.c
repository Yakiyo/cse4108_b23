#include <stdio.h>

int main() {
    float base, height;
    float area;
    printf("Base of triangle: ");
    scanf("%f", &base);
    printf("Height of triangle: ");
    scanf("%f", &height);
    area = base*height/2;
    printf("Area of the triangle is: %0.2f", area);
    return 0;
}