// 5. Write a program to sort a group of students based on their marks using structures and bubble

#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to perform the bubble sort on an array of students
void bubbleSort(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare marks and swap if necessary
            if (students[j].marks > students[j + 1].marks) {
                // Swap the students
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

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

    // Input: Student details
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
    }

    // Perform bubble sort based on marks
    bubbleSort(students, numStudents);

    // Display sorted student details
    printf("\nSorted Student Details based on Marks:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    return 0;
}
