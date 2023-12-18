// 2. Write a program to read and display the details of a student using a structure.

#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare a structure variable for a student
    struct Student student;

    // Input: Student details
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove the newline character

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
