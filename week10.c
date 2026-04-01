#include <stdio.h>

// Function to perform Bubble Sort using pointers
void bubbleSort(int *ptr, int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            
            // Comparing adjacent elements using pointer arithmetic
            // *(ptr + j) is equivalent to arr[j]
            if (*(ptr + j) > *(ptr + j + 1)) {
                
                // Swapping the elements
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        // Reading input directly into pointer locations
        scanf("%d", (arr + i));
    }

    // Call bubbleSort by passing the array (which acts as a pointer)
    bubbleSort(arr, n);

    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}
