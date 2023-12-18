// 5. Write a program to merge two sorted arrays into a new array.

#include <stdio.h>

int main() {
    int size1, size2;

    // Input: Size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    // Check for a valid array size
    if (size1 <= 0) {
        printf("Invalid array size. Please enter a size greater than 0.\n");
        return 1; // Exit the program with an error code
    }

    int arr1[size1];

    // Input: Elements of the first array (assuming it's already sorted)
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input: Size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    // Check for a valid array size
    if (size2 <= 0) {
        printf("Invalid array size. Please enter a size greater than 0.\n");
        return 1; // Exit the program with an error code
    }

    int arr2[size2];

    // Input: Elements of the second array (assuming it's already sorted)
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }


