#include <stdio.h>

int main() {
    float s, t;
    float avg;
    printf("Number of total students: ");
    scanf("%f", &s);
    printf("Number of teachers: ");
    scanf("%f", &t);
    avg = s/t;
    printf("Average number of students per teacher is: %0.2f", avg);
    return 0;
}