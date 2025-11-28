#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
    float fees;
};

void Createrecord();
void Readrecord();
void Updaterecord();
void Deleterecord();

int main() {
    int choice;
    while (1) {
        printf("\n 1. Create\n 2. Read\n 3. Update\n 4. Delete\n 5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: Createrecord(); break;
        case 2: Readrecord(); break;
        case 3: Updaterecord(); break;
        case 4: Deleterecord(); break;
        case 5: exit(0);
        default: printf("Invalid Choice!!\n");
        }
    }
    return 0;
}

void Createrecord() {
    FILE *f = fopen("Students.txt", "a");
    struct Student stu;

    printf("Enter Roll No.: ");
    scanf("%d", &stu.roll);
    getchar();  // Clear newline
    printf("Enter Name: ");
    fgets(stu.name, sizeof(stu.name), stdin);
    stu.name[strcspn(stu.name, "\n")] = 0;  // Remove newline

    printf("Enter Marks: ");
    scanf("%f", &stu.marks);
    printf("Enter Fees: ");
    scanf("%f", &stu.fees);

    fprintf(f, "%d %s %.2f %.2f\n", stu.roll, stu.name, stu.marks, stu.fees);
    fclose(f);
    printf("Record Added Successfully.\n");
}

void Readrecord() {
    FILE *f = fopen("Students.txt", "r");
    struct Student stu;

    printf("\n========= All Student Records =========\n");
    while (fscanf(f, "%d %s %f %f", &stu.roll, stu.name, &stu.marks, &stu.fees) == 4) {
        printf("Roll No: %d\tName: %s\tMarks: %.2f\tFees: %.2f\n",
               stu.roll, stu.name, stu.marks, stu.fees);
    }
    fclose(f);
}

void Updaterecord() {
    FILE *f = fopen("Students.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct Student stu;
    int roll, found = 0;

    printf("Enter Roll No. to UPDATE: ");
    scanf("%d", &roll);

    while (fscanf(f, "%d %s %f %f", &stu.roll, stu.name, &stu.marks, &stu.fees) == 4) {
        if (stu.roll == roll) {
            getchar();  // clear buffer
            printf("Enter New Name: ");
            fgets(stu.name, sizeof(stu.name), stdin);
            stu.name[strcspn(stu.name, "\n")] = 0;
            printf("Enter New Marks: ");
            scanf("%f", &stu.marks);
            printf("Enter New Fees: ");
            scanf("%f", &stu.fees);
            found = 1;
        }
        fprintf(temp, "%d %s %.2f %.2f\n", stu.roll, stu.name, stu.marks, stu.fees);
    }

    fclose(f);
    fclose(temp);

    remove("Students.txt");
    rename("temp.txt", "Students.txt");

    if (found)
        printf("Record Updated Successfully.\n");
    else
        printf("Record Not Found!\n");
}

void Deleterecord() {
    FILE *f = fopen("Students.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct Student stu;
    int roll, found = 0;

    printf("Enter Roll No. to DELETE: ");
    scanf("%d", &roll);

    while (fscanf(f, "%d %s %f %f", &stu.roll, stu.name, &stu.marks, &stu.fees) == 4) {
        if (stu.roll != roll)
            fprintf(temp, "%d %s %.2f %.2f\n", stu.roll, stu.name, stu.marks, stu.fees);
        else
            found = 1;
    }

    fclose(f);
    fclose(temp);

    remove("Students.txt");
    rename("temp.txt", "Students.txt");

    if (found)
        printf("Record Deleted Successfully.\n");
    else
        printf("Record Not Found!\n");
}