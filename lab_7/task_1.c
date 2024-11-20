#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int sum = 1;
        printf("1");
        for (int j = 2; j <= i; j++) {
            sum += j;
            printf(" + %d", j);
        }
        printf(" = %d\n", sum);
    }
    return 0;
}