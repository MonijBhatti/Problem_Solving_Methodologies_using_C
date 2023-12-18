// 4. Write a program to write data to a binary file.

#include <stdio.h>

int main() {
    FILE *file;
    char fileName[100];
    unsigned char data[] = {0x48, 0x65, 0x6C, 0x6C, 0x6F, 0x20, 0x57, 0x6F, 0x72, 0x6C, 0x64};

    // Input the file name from the user
    printf("Enter the name of the binary file: ");
    scanf("%s", fileName);

    // Open the file for binary writing
    file = fopen(fileName, "wb");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Unable to open the binary file.\n");
        return 1; // Exit with an error code
    }

    // Write data to the binary file
    fwrite(data, sizeof(unsigned char), sizeof(data) / sizeof(data[0]), file);

    // Close the file
    fclose(file);

    printf("Data written to the binary file successfully.\n");

    return 0;
}
