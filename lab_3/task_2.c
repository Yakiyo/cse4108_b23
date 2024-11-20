#include<stdio.h>

int main() {
    float p1 = 9.44, p2 = 47.75, p3 = 68.5;
    printf("%20s $%5.2f\n", "Chicken", p1);
    printf("%20s $%5.2f\n", "Cold Coffee", p2);
    printf("%20s $%5.2f\n", "Fried Rice", p3);
    printf("\n");

    float sub_total = p1 + p2 + p3;
    float tax = sub_total * 15 / 100;

    printf("%20s $%6.2f\n", "Sub Total:", sub_total);
    printf("%20s $%6.2f\n", "Tax:", tax);
    printf("%20s $%6.2f\n", "Total:", sub_total + tax);
    return 0;
}