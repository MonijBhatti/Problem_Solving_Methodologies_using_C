// 6. Write a program to remove duplicates from an array.

#include <stdio.h>

int main() {
    int size;

    // Input: Size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check for a valid array size
    if (size <= 0) {
        printf("Invalid array size. Please enter a size greater than 0.\n");
        return 1; // Exit the program with an error code
    }

    int arr[size];

    // Input: Elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Remove duplicates from the array
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;

        // Check if the current element is a duplicate
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not a duplicate, add it to the new array
        if (!isDuplicate) {
            arr[newSize++] = arr[i];
        }
    }

    // Display the array without duplicates
    printf("Array without duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
