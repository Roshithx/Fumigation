#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < size; i++) {
        int isPrime = 0;
        if (arr[i] <= 1)
            isPrime = 1;
        else {
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            sum += arr[i];
        }
    }

    printf("Sum of array elements except prime numbers: %d\n", sum);

    return 0;
}
