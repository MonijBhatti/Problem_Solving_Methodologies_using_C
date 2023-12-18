// 5. Write a program to append data to an existing file.
#include <stdio.h>

int main() {
    FILE *file;
    char fileName[100];
    char data[100];

    // Input the name of the existing file from the user
    printf("Enter the name of the existing file to append data: ");
    scanf("%s", fileName);

    // Open the file for appending
    file = fopen(fileName, "a");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Unable to open the file for appending.\n");
        return 1; // Exit with an error code
    }

    // Input data from the user to append
    printf("Enter data to append to the file (max 100 characters):\n");
    scanf(" %[^\n]", data);

    // Append data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    printf("Data appended to the file successfully.\n");

    return 0;
}
