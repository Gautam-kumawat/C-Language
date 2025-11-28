#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int roll;
    char name[50];
    float marks;
    float fees;
};

void Createrecord();
void Readrecord();
void Updaterecord();
void Deleterecord();

int main(){
    int choice;

    while (1)
    {
        printf("\n 1.Create\n 2.Read\n 3.Update\n 4.Delete\n 5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            Createrecord();
            break;
        case 2:
            Readrecord();
            break;
        case 3:
            Updaterecord();
            break;
        case 4:
            Deleterecord();    
            break;
        case 5:
            exit(0);
            break;
        default: printf("Invalid Choice!!\n");
            break;
        }
    } 
    return 0; 
}

void Createrecord(){
    FILE *f = fopen("Students.dat", "ab");
    struct Student stu;

    printf("Enter Roll No. :");
    scanf("%d", &stu.roll);
    printf("Enter Name :");
    scanf("%s", stu.name);
    printf("Enter Marks :");
    scanf("%f", &stu.marks);
    printf("Enter Fees :");
    scanf("%f", &stu.fees);
    
    fwrite(&stu, sizeof(stu), 1, f);
    fclose(f);
    printf("Record Added Succesfully.");
}

void Readrecord(){
    FILE *f = fopen("Students.dat", "rb");
    struct Student stu;

    printf("=========All Student Record==========\n");
    while (fread(&stu, sizeof(stu), 1, f)){
        printf("Roll No.: %d, Name: %s, Marks: %.2f, Fees: %.2f\n", stu.roll, stu.name, stu.marks, stu.fees);
    }
    fclose(f);
}

void Updaterecord(){
    FILE *f = fopen("Students.dat", "rb+");
    struct Student stu;
    int roll, found = 0;

    printf("Enter Roll No. to UPDATE:");
    scanf("%d",&roll);

    while (fread(&stu, sizeof(stu), 1, f)){
        if (stu.roll == roll){
            printf("Enter New Name :");
            scanf("%s", stu.name);
            printf("Enter New Marks :");
            scanf("%f", &stu.marks);
            printf("Enter New Fees :");
            scanf("%f", & stu.fees);

            fseek(f, -sizeof(stu), SEEK_CUR);
            fwrite(&stu, sizeof(stu), 1, f);
            found = 1;
            break;
        }
    }

    fclose(f);
    if(found) printf("Record Updated Successfully.\n");
    else printf("Record Not Found!!\n");   
}

void Deleterecord(){
    FILE *f = fopen("Students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Student stu;
    int roll, found = 0;

    printf("Enter Roll No. of Student to DELETE:");
    scanf("%d",&roll);

    while (fread(&stu, sizeof(stu), 1, f)){
        if (stu.roll != roll){
            fwrite(&stu, sizeof(stu), 1, temp);
        }
        else{
            found = 1;
        } 
    }
    fclose(f);
    fclose(temp);

    remove("Students.dat");
    rename("temp.dat", "Students.dat");

    if(found) printf("Record deleted Successfully!!\n");
    else printf("Record not found\n");
}