#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a = (n - 1) / 2;
    for (int i = a; i >= 1; i--) {
        printf("RAYAT");
        int spaces = i * 2;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        printf("RAYAT\n");
    }
    printf("RAYAT\n");
    for (int i = 1; i <= a; i++) {
        printf("RAYAT");
        int spaces = i * 2;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        printf("RAYAT\n");
    }
    return 0;
}