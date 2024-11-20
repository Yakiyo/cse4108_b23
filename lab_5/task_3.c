#include<stdio.h>
#include<math.h>

int main() {
    long long int num;
    scanf("%lld", &num);
    // if 0, not prime, if 1, is prime
    int isPrime = 1;
    for (long long int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0) {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}