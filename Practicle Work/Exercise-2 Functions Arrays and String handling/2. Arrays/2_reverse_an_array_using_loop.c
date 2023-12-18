// 2. Write a program to reverse an array using a loop.

#include <stdio.h>

int main() {
    int size;

    // Input: Size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check for a valid array size
    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1; // Exit the program with an error code
    }

    int arr[size];

    // Input: Elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Reverse the array using a loop
    int temp;
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        // Swap elements at positions i and j
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Display the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
