// 9. Write a program to insert an element into an array at a given position

#include <stdio.h>

int main() {
    int size, position, newValue;

    // Input: Size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check for a valid array size
    if (size <= 0) {
        printf("Invalid array size. Please enter a size greater than 0.\n");
        return 1; // Exit the program with an error code
    }

    int arr[size + 1]; // Creating a larger array to accommodate the new element

    // Input: Elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input: Position to insert the new element
    printf("Enter the position to insert the new element (1 to %d): ", size + 1);
    scanf("%d", &position);

    // Check for a valid position
    if (position < 1 || position > size + 1) {
        printf("Invalid position. Please enter a position between 1 and %d.\n", size + 1);
        return 1; // Exit the program with an error code
    }

    // Input: Value to insert
    printf("Enter the value to insert: ");
    scanf("%d", &newValue);

    // Shift elements to make room for the new element
    for (int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the given position
    arr[position - 1] = newValue;

    // Display the array after insertion
    printf("Array after inserting %d at position %d:\n", newValue, position);
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
