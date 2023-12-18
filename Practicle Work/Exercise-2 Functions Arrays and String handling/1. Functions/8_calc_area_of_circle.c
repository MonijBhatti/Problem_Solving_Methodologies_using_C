// 8. Write a program to calculate the area of a circle using a function.

#include <stdio.h>
#include <math.h>

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;

    // Input from user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Check for a valid radius
    if (radius < 0) {
        printf("Invalid radius. Please enter a non-negative value.\n");
        return 1; // Exit the program with an error code
    }

    // Call the function to calculate and display the area
    double area = calculateCircleArea(radius);
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
