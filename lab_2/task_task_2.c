/**
    Here we use an escape character '\n' within the function so instead of showing '\n',
    it prints a line break. Again '%d' is a format specifier, since there is no
    specified variable, the compiler prints a garbage value from the memory in place of '%d'
*/

#include<stdio.h>

int main() {
    printf("Hello Again.");
    printf("#d#n$-d\n%d?t");
    return 0;
}