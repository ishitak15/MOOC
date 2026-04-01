#include <stdio.h>

int main() {
    int n, sum = 0, i;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to find divisors and calculate their sum
    // We only go up to n/2 because no divisor can be greater than half the number
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum == n && n > 0) {
        printf("%d is a Perfect Number.\n", n);
    } else {
        printf("%d is not a Perfect Number.\n", n);
    }

    return 0;
}
