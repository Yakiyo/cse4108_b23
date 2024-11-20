#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    // no. of asteriks at the start
    int max = 1 + 2 * rows;
    /**
     * Print top half
     */
    for (int i = rows; i >= 1; i--) {
        int stars = 1 + 2 * i;
        int spaces = (max - stars) / 2;
        /**
         * Print padding in the front
         */
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        /**
         * Print the stars
         */
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // print mid point
    printf("%*s\n", ((max - 1) / 2) + 1, "*");

    // print bottom half
    for (int i = 1; i <= rows; i++) {
        int stars = 1 + 2 * i;
        int spaces = (max - stars) / 2;
        /**
         * Print padding in the front
         */
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        /**
         * Print the stars
         */
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}