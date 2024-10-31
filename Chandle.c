//c program
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "data.txt"
// Function to write a sentence to the file in c 
void writeSentenceToFile() {
    FILE *fptr = fopen(FILENAME, "w");
    if (fptr == NULL) {
        perror("Error opening file for writing");
        exit(1);
    }

    char sentence[101];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    if (fprintf(fptr, "%s", sentence) < 0) {
        perror("Error writing to file");
        fclose(fptr);
        exit(1);
    }

    fclose(fptr);
    printf("Sentence written to file successfully.\n");
}

// c Function to read and display content from the file
void readFileContent() {
    FILE *fptr = fopen(FILENAME, "r");
    if (fptr == NULL) {
        perror("Error opening file for reading");
        exit(1);
    }

    char buffer[101];
    printf("File content:\n");
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }

    if (ferror(fptr)) {
        perror("Error reading file");
    }

    fclose(fptr);
}

//c Function to append a second sentence to the file
void appendSentenceToFile() {
    FILE *fptr = fopen(FILENAME, "a");
    if (fptr == NULL) {
        perror("Error opening file for appending");
        exit(1);
    }

    char sentence[101];
    printf("Enter another sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    if (fprintf(fptr, "%s", sentence) < 0) {
        perror("Error appending to file");
        fclose(fptr);
        exit(1);
    }

    fclose(fptr);
    printf("Sentence appended to file successfully.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nText File Operations Menu:\n");
        printf("1. Write a sentence to file\n");
        printf("2. Read and display file content\n");
        printf("3. Append a sentence to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Clear the newline character from the input buffer

        switch (choice) {
            case 1:
                writeSentenceToFile();
                break;
            case 2:
                readFileContent();
                break;
            case 3:
                appendSentenceToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
