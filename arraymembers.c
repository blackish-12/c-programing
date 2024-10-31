//c program to write all members of an array
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int marks;
};

int main() {
    struct Student students[5];
    FILE *fptr;

    // Write to file using fwrite()
    fptr = fopen("students.dat", "wb");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    fwrite(students, sizeof(struct Student), 5, file);
    fclose(fptr);
    printf("Data successfully written to students.dat\n");

    // Read from file and display on screen
    fptr = fopen("students.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fread(students, sizeof(struct Student), 5, file);
    printf("Data read from file:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    fclose(fptr);
    return 0;
}
