#include<stdio.h>

int main() {
    int st, end;
    scanf("%d %d", &st, &end);
    int a = st + 1 + (st % 2);
    int sum = 0;
    while (a <= end) {
        if (a % 5 == 0) {
            sum += a;
        }
        a += 2;
    }
    printf("%d", sum);
    return 0;
}