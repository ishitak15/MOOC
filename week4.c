#include <stdio.h>

int main() {
    int n1, n2, n3;

    // Reading three integer values
    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Outer if-else: Compare n1 and n2
    if (n1 < n2) {
        // Inner if-else: Since n1 is smaller than n2, compare n1 with n3
        if (n1 < n3) {
            printf("%d is the smallest number.\n", n1);
        } else {
            printf("%d is the smallest number.\n", n3);
        }
    } 
    else {
        // Inner if-else: Since n2 is smaller than n1, compare n2 with n3
        if (n2 < n3) {
            printf("%d is the smallest number.\n", n2);
        } else {
            printf("%d is the smallest number.\n", n3);
        }
    }

    return 0;
}
