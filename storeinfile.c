//c program to read names of 5 students
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int marks;
};

int main() {
    FILE *fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        fprintf(fptr, "%s %d\n", students[i].name, students[i].marks);
    }

    fclose(fptr);
    printf("Data successfully written to students.txt\n");
    return 0;
}
