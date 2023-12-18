// 6. sort algorithm.

#include <stdio.h>

// Function to perform the bubble sort on an array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare and swap if necessary
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input: Number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check for a valid number of elements
    if (n <= 0) {
        printf("Invalid number of elements. Please enter a number greater than 0.\n");
        return 1; // Exit the program with an error code
    }

    // Input: Elements of the array
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Perform bubble sort
    bubbleSort(arr, n);

    // Display the sorted array
    printf("\nSorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
