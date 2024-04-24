#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200]; // Assuming maximum size of arrays is 100
    int size1, size2;

    // Input for first array
    printf("Enter the size of first sorted array: ");
    scanf("%d", &size1);
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter the size of second sorted array: ");
    scanf("%d", &size2);
    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge two sorted arrays
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < size2) {
        merged[k++] = arr2[j++];
    }

    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
