#include<stdio.h>

int main() {
    float min = 0;
    float num;
    while (1) {
        scanf("%f", &num);
        // if neg or 0, break off
        if (num <= 0) break;
        // if its positive or is at 0, update min
        if (min == 0 || num < min) {
            min = num;
        }
    }
    if (min <= 0) {
        printf("NONE");
    } else {
        printf("%.2f", min);
    }
    return 0;
}