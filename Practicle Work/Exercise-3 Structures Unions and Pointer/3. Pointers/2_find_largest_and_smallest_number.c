// 2. Write a program that uses pointers to find the largest and smallest numbers in an array of integers.
#include <stdio.h>

// Function to find the largest and smallest numbers in an array
void findMinMax(int *arr, int size, int *min, int *max) {
    // Initialize min and max with the first element of the array
    *min = *max = arr[0];

    // Iterate through the array to find min and max
    for (int i = 1; i < size; ++i) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min, max;

    // Call the findMinMax function
    findMinMax(arr, size, &min, &max);

    // Display the results
    printf("\nMinimum Number: %d\n", min);
    printf("Maximum Number: %d\n", max);

    return 0;
}
