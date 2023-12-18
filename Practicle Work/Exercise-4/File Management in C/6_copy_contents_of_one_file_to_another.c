// 6. Write a program to copy the contents of one file to another.

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char character;

    // Input the name of the source file from the user
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    // Open the source file for reading
    sourceFile = fopen(sourceFileName, "r");

    // Check if the source file is opened successfully
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1; // Exit with an error code
    }

    // Input the name of the destination file from the user
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    // Open the destination file for writing
    destinationFile = fopen(destinationFileName, "w");

    // Check if the destination file is opened successfully
    if (destinationFile == NULL) {
        fclose(sourceFile); // Close the source file
        printf("Unable to open the destination file.\n");
        return 1; // Exit with an error code
    }

    // Copy contents from the source file to the destination file character by character
    while ((character = fgetc(sourceFile)) != EOF) {
        fputc(character, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("Contents copied from %s to %s successfully.\n", sourceFileName, destinationFileName);

    return 0;
}
