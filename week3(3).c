#include <stdio.h>

int main() {
    int num;

    // Asking for user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using if...else to check the remainder
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } 
    else {
        printf("%d is Odd.\n", num);
    }

    return 0;
}
