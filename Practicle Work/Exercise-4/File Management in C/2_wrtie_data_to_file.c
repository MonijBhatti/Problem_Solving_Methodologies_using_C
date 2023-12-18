// 2. Write a program to write data to a file.
#include <stdio.h>

int main() {
    FILE *file;
    char fileName[100];
    char data[100];

    // Input the file name from the user
    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    // Open the file for writing
    file = fopen(fileName, "w");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1; // Exit with an error code
    }

    // Input data from the user
    printf("Enter data to write to the file (max 100 characters):\n");
    scanf(" %[^\n]", data);

    // Write data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    printf("Data written to the file successfully.\n");

    return 0;
}
