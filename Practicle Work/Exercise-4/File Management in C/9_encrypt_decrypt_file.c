// 9. Write a program to encrypt and decrypt a file.
#include <stdio.h>

void encryptDecryptFile(const char *inputFileName, const char *outputFileName, const char *key) {
    FILE *inputFile, *outputFile;
    char character;
    int keyLength = strlen(key);
    int keyIndex = 0;

    // Open the input file for reading
    inputFile = fopen(inputFileName, "r");

    // Check if the input file is opened successfully
    if (inputFile == NULL) {
        printf("Unable to open the input file.\n");
        return;
    }

    // Open the output file for writing
    outputFile = fopen(outputFileName, "w");

    // Check if the output file is opened successfully
    if (outputFile == NULL) {
        fclose(inputFile); // Close the input file
        printf("Unable to open the output file.\n");
        return;
    }

    // Encrypt or decrypt the contents of the file character by character using XOR
    while ((character = fgetc(inputFile)) != EOF) {
        // XOR the character with the corresponding key character
        char encryptedChar = character ^ key[keyIndex];

        // Write the result to the output file
        fputc(encryptedChar, outputFile);

        // Move to the next key character, looping if necessary
        keyIndex = (keyIndex + 1) % keyLength;
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("File %s %s %s successfully.\n", inputFileName, (keyLength > 0) ? "encrypted/decrypted" : "copied", outputFileName);
}

int main() {
    char inputFileName[100];
    char outputFileName[100];
    char key[100];

    // Input the name of the input file from the user
    printf("Enter the name of the input file: ");
    scanf("%s", inputFileName);

    // Input the name of the output file from the user
    printf("Enter the name of the output file: ");
    scanf("%s", outputFileName);

    // Input the encryption/decryption key from the user
    printf("Enter the encryption/decryption key: ");
    scanf("%s", key);

    // Encrypt or decrypt the file
    encryptDecryptFile(inputFileName, outputFileName, key);

    return 0;
}
