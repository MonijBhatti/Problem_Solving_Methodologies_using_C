// 3. Write a program to read a binary file and display its contents on the screen.

#include <stdio.h>

int main() {
    FILE *file;
    char fileName[100];
    unsigned char byte;

    // Input the file name from the user
    printf("Enter the name of the binary file: ");
    scanf("%s", fileName);

    // Open the file for binary reading
    file = fopen(fileName, "rb");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Unable to open the binary file.\n");
        return 1; // Exit with an error code
    }

    // Read and display the contents of the binary file byte by byte
    printf("Contents of the binary file:\n");
    while (fread(&byte, sizeof(unsigned char), 1, file) == 1) {
        printf("%02X ", byte); // Display the byte in hexadecimal format
    }

    // Close the file
    fclose(file);

    return 0;
}
