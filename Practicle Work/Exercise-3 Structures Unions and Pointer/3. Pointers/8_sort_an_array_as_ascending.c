// 8. Write a program that uses pointers to sort an array of integers in ascending order.

#include <stdio.h>

// Function to sort an array of integers in ascending order using pointers
void sortAscending(int *arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap using a temporary variable
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
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

    // Call the sortAscending function
    sortAscending(arr, size);

    // Display the sorted array
    printf("\nSorted Array in Ascending Order:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
