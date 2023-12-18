// 9. Write a program to find the grade of a student based on their marks using if-else statements.

#include <stdio.h>

int main() {
    int marks;

    // Get user input
    printf("Enter the marks: ");
    scanf("%d", &marks);

    // Check the grade based on the marks using if-else statements
    if (marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade: B\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade: C\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade: D\n");
    } else if (marks >= 0 && marks < 60) {
        printf("Grade: F\n");
    } else {
        printf("Invalid marks. Marks should be between 0 and 100.\n");
    }

    return 0;
}
