#include<stdio.h>

int sum(int n) {
    int a, b ,c;
    a = n%10;
    n/=10;
    b = n%10;
    n/=10;
    c = n%10;
    n/=10;
    return a+b+c;
}

int main() {
    int num;
    printf("Provide a 6 digit number: ");
    scanf("%d", &num);
    int p1, p2;
    p1 = sum(num / 1000);
    p2 = sum(num % 1000);
    if (p1 == p2) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}