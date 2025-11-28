#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "students.txt"

struct Student {
    int roll;
    char name[50];
    float marks;
};

// Function declarations
void createStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void sortStudentsByMarks();

int main() {
    int choice;

    while (1) {
        printf("\n===== Student Management Menu =====\n");
        printf("1. Create Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Record by Roll Number\n");
        printf("4. Update Record\n");
        printf("5. Delete Record\n");
        printf("6. Sort Students by Marks (Descending)\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: sortStudentsByMarks(); break;
            case 7: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}

void createStudent() {
    FILE *fp = fopen(FILE_NAME, "a");
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    getchar(); // to clear newline
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0; // remove newline
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("Record added successfully!\n");
}

void displayStudents() {
    FILE *fp = fopen(FILE_NAME, "r");
    struct Student s;
    printf("\n--- Student Records ---\n");

    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);
}

void searchStudent() {
    FILE *fp = fopen(FILE_NAME, "r");
    struct Student s;
    int roll, found = 0;

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            printf("Found: Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
            found = 1;
            break;
        }
    }
    if (!found) printf("Record not found.\n");
    fclose(fp);
}

void updateStudent() {
    FILE *fp = fopen(FILE_NAME, "r+");
    struct Student s;
    int roll, found = 0;

    printf("Enter roll number to update: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            fseek(fp, -sizeof(s), SEEK_CUR);
            printf("Enter new name: ");
            getchar();
            fgets(s.name, sizeof(s.name), stdin);
            s.name[strcspn(s.name, "\n")] = 0;
            printf("Enter new marks: ");
            scanf("%f", &s.marks);
            fwrite(&s, sizeof(s), 1, fp);
            found = 1;
            printf("Record updated!\n");
            break;
        }
    }
    if (!found) printf("Record not found.\n");
    fclose(fp);
}

void deleteStudent() {
    FILE *fp = fopen(FILE_NAME, "r");
    FILE *temp = fopen("temp.txt", "w");
    struct Student s;
    int roll, found = 0;

    printf("Enter roll number to delete: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll != roll) {
            fwrite(&s, sizeof(s), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);
    remove(FILE_NAME);
    rename("temp.txt", FILE_NAME);

    if (found)
        printf("Record deleted.\n");
    else
        printf("Record not found.\n");
}

void sortStudentsByMarks() {
    FILE *fp = fopen(FILE_NAME, "r");
    struct Student *arr = NULL;
    struct Student s;
    int count = 0;

    // Count records
    while (fread(&s, sizeof(s), 1, fp)) {
        count++;
    }

    rewind(fp);
    arr = (struct Student *)malloc(count * sizeof(struct Student));
    fread(arr, sizeof(struct Student), count, fp);
    fclose(fp);

    // Sort in descending order
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (arr[i].marks < arr[j].marks) {
                struct Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n--- Sorted Students (by Marks) ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", arr[i].roll, arr[i].name, arr[i].marks);
    }

    free(arr);
}