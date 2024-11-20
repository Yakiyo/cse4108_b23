#include<stdio.h>

int main() {
    int a, b;
    printf("Provide input IDs:\n");
    scanf("%d", &a);
    // taking the line break in input;
    char c;
    scanf("%c", &c);
    scanf("%d", &b);

    int a1 = a/10000000;
    int a2 = a%100;

    int b1 = b/10000000;
    int b2 = b%100;

    if (a2 == b2 && a1 < b1) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}