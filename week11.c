#include <stdio.h>

// Recursive function to check if a number is prime
// 'n' is the number to check, 'i' is the current divisor being tested
int isPrime(int n, int i) {
    // Base cases
    if (n <= 2) {
        return (n == 2) ? 1 : 0;
    }
    if (n % i == 0) {
        return 0; // Found a divisor, not prime
    }
    if (i * i > n) {
        return 1; // No divisors found up to sqrt(n), it is prime
    }

    // Recursive step: check the next divisor
    return isPrime(n, i + 1);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Start checking for divisors beginning from 2
    if (isPrime(num, 2)) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is not a Prime number.\n", num);
    }

    return 0;
}
