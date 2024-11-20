#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long int prev = 0;
    printf("%lld", prev);
    // return early when input is 1
    if (n == 1) return 0;

    long long int current = 1;
    printf(", %lld", current);

    for (int i = 2; i < n; i++) {
        long long int j = current + prev;
        prev = current;
        current = j;
        printf(", %lld", current);
    }

    return 0;
}