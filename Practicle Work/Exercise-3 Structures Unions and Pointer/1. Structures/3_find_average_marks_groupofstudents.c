// 3. Write a program to find the average marks of a group of students using a structure.

#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int numStudents;

    // Input: Number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Check for a valid number of students
    if (numStudents <= 0) {
        printf("Invalid number of students. Please enter a number greater than 0.\n");
        return 1; // Exit the program with an error code
    }

    // Declare an array of structures to store student details
    struct Student students[numStudents];

    // Input: Student details and calculate total marks
    float totalMarks = 0;
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        // Input: Student name
        printf("Enter student name: ");
        getchar(); // Consume the newline character left by previous scanf
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove the newline character

        // Input: Roll number
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        // Input: Marks
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        // Accumulate total marks for calculating the average
        totalMarks += students[i].marks;
    }

    // Calculate average marks
    float averageMarks = totalMarks / numStudents;

    // Display average marks
    printf("\nAverage marks of the group: %.2f\n", averageMarks);

    return 0;
}
