#include<stdio.h>

int main() {
    int r, w, l;
    printf("Provide radius, width and length: ");
    scanf("%d %d %d", &r, &w, &l);
    float diameter = r * 2;
    float diagonalrt = w * w + l * l;
    float d2 = diameter * diameter;
    if (d2 < diagonalrt) {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}
