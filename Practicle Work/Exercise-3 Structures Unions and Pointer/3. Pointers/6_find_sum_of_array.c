// 6. Write a program that uses pointers to find the sum and average of an array of floating-point numbers.

#include <stdio.h>

// Function to find the sum and average of an array of floating-point numbers
void findSumAndAverage(const float *arr, int size, float *sum, float *average) {
    *sum = 0.0;

    // Calculate the sum of the array elements
    for (int i = 0; i < size; ++i) {
        *sum += arr[i];
    }

    // Calculate the average
    *average = *sum / size;
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    float arr[size];

    // Input array elements
    printf("Enter %d floating-point numbers:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    float sum, average;

    // Call the findSumAndAverage function
    findSumAndAverage(arr, size, &sum, &average);

    // Display the results
    printf("\nSum of the array elements: %.2f\n", sum);
    printf("Average of the array elements: %.2f\n", average);

    return 0;
}
