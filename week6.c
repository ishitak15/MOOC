#include <stdio.h>

int main() {
    int n, i;
    int array[100]; // Defined with a size large enough for test data
    int max;

    // Reading the number of elements 'n'
    scanf("%d", &n);

    // Reading the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Assume the first element is the largest
    max = array[0];

    // Iterate through the array to find the actual largest element
    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Print the result
    printf("Largest element = %d\n", max);

    return 0;
}
