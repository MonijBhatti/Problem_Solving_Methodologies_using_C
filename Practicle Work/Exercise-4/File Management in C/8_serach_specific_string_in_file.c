// 8. Write a program to search for a specific string in a file.

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char fileName[100];
    char searchString[100];
    char line[256];  // Assuming a maximum line length of 255 characters

    // Input the name of the file from the user
    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    // Open the file for reading
    file = fopen(fileName, "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1; // Exit with an error code
    }

    // Input the string to search for from the user
    printf("Enter the string to search for: ");
    scanf(" %s", searchString);

    // Search for the string in the file
    printf("Occurrences of '%s' in the file:\n", searchString);
    while (fgets(line, sizeof(line), file) != NULL) {
        if (strstr(line, searchString) != NULL) {
            // Display the line if the string is found
            printf("%s", line);
        }
    }

    // Close the file
    fclose(file);

    return 0;
}
