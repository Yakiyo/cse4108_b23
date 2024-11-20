#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int num = rand() % 100;
    // printf("%d\n", num);
    for (;;) {
        int guess;
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == num) {
            printf("Correct! You win!\n");
            return 0;
        } else if (guess > num) {
            printf("Too High!\n");
        } else {
            printf("Too Low!\n");
        }
    }
    return 0;
}