#include<stdio.h>

int main() {
    char name[6] = "RAYAT";
    // printf("%.8s", name);
    printf("%5s%9s\n", name, name);
    printf("%6s%7s\n", name, name);
    printf("%7s%s\n", name, name);
    printf("%6s%7s\n", name, name);
    printf("%5s%9s\n", name, name);

    return 0;
}