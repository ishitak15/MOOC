#include <stdio.h>

int main() {
    int n, i, search, count = 0;
    int array[100];

    // Read the number of elements in the array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Input the element to search for
    printf("Enter a number to search: ");
    scanf("%d", &search);

    // Traverse the array to find matches
    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            // Location is index + 1
            printf("%d is present at location %d\n", search, i + 1);
            count++;
        }
    }

    // Final occurrence report
    if (count == 0) {
        printf("%d is not present in the array.\n", search);
    } else {
        printf("%d is present %d times in the array.\n", search, count);
    }

    return 0;
}
