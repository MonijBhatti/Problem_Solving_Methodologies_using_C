// 8. Write a program to find the frequency of each element in an array.

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

    // Find the frequency of each element in the array
    int visited[size];
    for (int i = 0; i < size; i++) {
        visited[i] = -1;
    }

    for (int i = 0; i < size; i++) {
        int count = 1;

        // Skip if the element is already counted
        if (visited[i] != 0) {
            continue;
        }

        // Count the frequency of the current element
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 0;
            }
        }

        // Display the frequency of the current element
        printf("Frequency of %d: %d\n", arr[i], count);
    }

    return 0;
}
