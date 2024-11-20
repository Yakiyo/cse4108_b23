#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);
    char grade = 'F';
    float gp = 0.00;
    marks = marks/10;
    // printf("%d", marks);
    switch (marks) {
    case 10:
    case 9:
    case 8:
        gp = 4.00;
        grade = 'A';
        break;
    case 7:
        gp = 3.50;
        grade = 'B';
        break;
    case 6:
        gp = 3.00;
        grade = 'C';
        break;

    case 5:
        gp = 2.50;
        grade = 'D';
        break;
    }

    printf("Grade: %c\n", grade);
    printf("Grade Point: %.2f", gp);
    return 0;
}