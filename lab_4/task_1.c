#include<stdio.h>

int main() {
    int a, b, c;
    printf("Input 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("Greatest number is %d", max);
    return 0;
}