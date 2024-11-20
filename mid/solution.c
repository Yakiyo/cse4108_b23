#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count[10] = { 0 };

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        int idx = (num - 1) / 10;
        count[idx]++;
    }

    for (int i = 0; i < 10; i++) {
        printf("p%d [%d, %d]: %d\n", i + 1, i * 10 + 1, i * 10 + 10, count[i]);
    }

    float avg = 0;

    for (int i = 0; i < 10; i++) {
        avg += (5.5 + i * 10) * count[i];
    }

    avg /= 5;

    printf("Approximate average: %.2f", avg);
    return 0;
}