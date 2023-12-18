// 4. Write a program to find the total marks of a student using a structure and a function.

#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming 5 subjects
};

// Function to calculate the total marks of a student
float calculateTotalMarks(struct Student student) {
    float totalMarks = 0;

    for (int i = 0; i < 5; i++) {
        totalMarks += student.marks[i];
    }

    return totalMarks;
}

int main() {
    // Declare a structure variable for a student
    struct Student student;

    // Input: Student details
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove the newline character

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    // Input: Marks for each subject
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
    }

    // Calculate total marks using the function
    float totalMarks = calculateTotalMarks(student);

    // Display total marks
    printf("\nTotal marks for %s (Roll Number: %d): %.2f\n", student.name, student.rollNumber, totalMarks);

    return 0;
}
