#include <stdio.h>

// Recursive function to find HCF of two numbers
int findHCF(int a, int b) {
    if (b != 0) {
        return findHCF(b, a % b);
    } else {
        return a;
    }
}

int main() {
    int n1, n2, n3, n4;
    int hcf1, hcf2, finalHCF;

    // Reading four integer values
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    // Step 1: Find HCF of first two numbers
    hcf1 = findHCF(n1, n2);
    
    // Step 2: Find HCF of the result and the third number
    hcf2 = findHCF(hcf1, n3);
    
    // Step 3: Find HCF of the result and the fourth number
    finalHCF = findHCF(hcf2, n4);

    // Displaying the result
    printf("The HCF of %d, %d, %d, and %d is: %d\n", n1, n2, n3, n4, finalHCF);

    return 0;
}
