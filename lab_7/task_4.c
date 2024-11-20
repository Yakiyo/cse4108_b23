#include <stdio.h>
#include <math.h>

int main() {
    float x;
    int n;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms to use: ");
    scanf("%d", &n);
    float result = x;
    for (int i = 1; i <= n; i++) {
        float term = powf(x, 2 * i + 1) / (2 * i + 1);
        // if term is odd, the term should be negative
        if (i % 2 != 0) {
            term = term * (-1);
        }
        result += term;
    }
    printf("Approximate value of tanˆ-1(%.2f) = %f", x, result);
    return 0;
}