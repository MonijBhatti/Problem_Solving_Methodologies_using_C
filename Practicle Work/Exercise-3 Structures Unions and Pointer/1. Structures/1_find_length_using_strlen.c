// 1. Write a program to define and initialize a structure for a student with attributes such as name,roll number, and marks.

#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Initialize a structure variable for a student
    struct Student student1;

    // Input: Student details
    printf("Enter student name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0'; // Remove the newline character

    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
