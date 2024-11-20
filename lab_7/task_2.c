#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int spaces = i;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        int digits = n - i;
        for (int j = 1; j <= digits; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}