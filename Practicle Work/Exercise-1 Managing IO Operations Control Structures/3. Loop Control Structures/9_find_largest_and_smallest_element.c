// 9. Write a program to find the largest and smallest elements in an array using a for loop.

#include <stdio.h>

int main() {
    int n;

    // Get user input for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check for valid array size
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    // Get user input for the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables for largest and smallest
    int largest = arr[0];
    int smallest = arr[0];

    // Find the largest and smallest elements using a for loop
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        } else if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Display the results
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
