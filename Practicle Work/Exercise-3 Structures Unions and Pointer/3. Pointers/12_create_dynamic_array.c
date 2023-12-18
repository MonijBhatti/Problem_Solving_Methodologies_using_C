// 12. Write a program that uses pointers to create a dynamic array.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray;
    int size;

    // Input the size of the dynamic array
    printf("Enter the size of the dynamic array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    dynamicArray = (int *)malloc(size * sizeof(int));

    // Check if memory allocation is successful
    if (dynamicArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Input array elements
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &dynamicArray[i]);
    }

    // Display array elements
    printf("Elements in the dynamic array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Deallocate memory for the dynamic array
    free(dynamicArray);

    return 0;
}
