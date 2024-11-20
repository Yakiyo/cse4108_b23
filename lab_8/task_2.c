#include <stdio.h>
#include <math.h>

float calcMean(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return (float) sum / len;
}

float calcDev(int arr[], int len, int mean) {
    int numerator = 0;
    for (int i = 0; i < len; i++) {
        numerator += pow(arr[i] - mean, 2);
    }
    return sqrtf((float) numerator / len);
}

int calcOutliers(int arr[], int max, int min, int len) {
    printf("Outliers: ");
    for (int i = 0; i < len; i++) {
        if (arr[i] < min || arr[i] > max) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of heroes: ");
    scanf("%d", &n);
    printf("%d\n", n);
    int lvls[n];
    printf("Enter the levels of heroes: ");
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &lvls[i]);
    }

    float mean = calcMean(lvls, n);
    float dev = calcDev(lvls, n, mean);

    printf("Mean Level: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", dev);

    float outmin = mean - 2 * dev;
    float outmax = mean + 2 * dev;
    calcOutliers(lvls, outmax, outmin, n);
    return 0;
}