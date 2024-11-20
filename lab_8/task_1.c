#include <stdio.h>
#include <limits.h>

int findMax(int arr[], int len) {
    int index = 0;
    for (int i = 1; i < len; i++) {
        if (arr[i] > arr[index]) {
            index = i;
        }
    }
    return index;
}

int main() {
    int n;
    printf("Enter the number of heroes: ");
    scanf("%d", &n);
    int lvls[n];
    printf("Enter the levels of heroes: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &lvls[i]);
    }

    // check if all numbers are same
    int areSame = 1;
    int v = lvls[0];
    for (int i = 1; i < n; i++) {
        if (lvls[i] != v) {
            areSame = 0;
            break;
        }
    }

    if (areSame == 1) {
        printf("Second Largest Level: None");
        return 0;
    }

    int mindex = findMax(lvls, n);
    lvls[mindex] = INT_MIN;

    int index = findMax(lvls, n);
    printf("Second Largest Level: %d",lvls[index]);

    return 0;
}