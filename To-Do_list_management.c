#include <stdio.h>

void addTask() {
    char task[200];
    FILE *fp = fopen("todo.txt", "a");

    printf("Enter Task: ");
    scanf(" %[^\n]", task);

    fprintf(fp, "%s\n", task);
    fclose(fp);
    printf("Task Added!\n");
}

void viewTasks() {
    char ch;
    FILE *fp = fopen("todo.txt", "r");

    printf("\n--- To-Do List ---\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
}

int main() {
    int choice;
    do {
        printf("\n1. Add Task\n2. View Tasks\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) addTask();
        else if (choice == 2) viewTasks();
    } while (choice != 3);

    return 0;
}
