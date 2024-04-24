#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200]; // Assuming maximum size of arrays is 100
    int size1, size2;

    // Input for first array
    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    printf("Enter elements of first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter the size of second array: ");
    scanf("%d", &size2);
    printf("Enter elements of second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merging arrays
    int total_elements = size1 + size2;
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    // Bubble sort to sort the merged array
    for (int i = 0; i < total_elements - 1; i++) {
        for (int j = 0; j < total_elements - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    // Print the sorted merged array
    printf("Merged and sorted array: ");
    for (int i = 0; i < total_elements; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
