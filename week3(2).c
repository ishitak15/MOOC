#include <stdio.h>

int main() {
    int num;

    // Prompt user for input
    printf("Enter any integer: ");
    scanf("%d", &num);

    // Check conditions using if...else if...else
    if (num > 0) {
        printf("%d is a Positive number.\n", num);
    } 
    else if (num < 0) {
        printf("%d is a Negative number.\n", num);
    } 
    else {
        printf("The number is Zero.\n", num);
    }

    return 0;
}
