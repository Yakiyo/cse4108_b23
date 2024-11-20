#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2;
    printf("Enter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);
    char opt;
    printf("Choose an operation (A: Add, S: Subtract, M: Multiply, D: Divide): ");
    scanf(" %c", &opt);
    float res;
    switch (opt)
    {
    case 'A':
        res = n1 + n2;
        break;
    case 'S':
        res = fabs(n1 - n2);
        break;
    case 'M':
        res = n1 * n2;
        break;
    case 'D':
        if (n2 == 0) {
            printf("Invalid input, cannot divide by 0");
            return 1;
        }
        res = n1 / n2;
        break;
    default:
        printf("Invalid operation!");
        return 1;
    }
    printf("Result: %.2f", res);
    return 0;
}