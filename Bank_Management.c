#include <stdio.h>
#include <stdlib.h>

struct Account {
    int acc_no;
    char name[50];
    float balance;
};

void createAccount() {
    struct Account a;
    FILE *fp = fopen("bank.txt", "a");

    printf("Enter Account Number: ");
    scanf("%d", &a.acc_no);
    printf("Enter Name: ");
    scanf(" %[^\n]", a.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
    printf("Account Created!\n");
}

void displayAccounts() {
    struct Account a;
    FILE *fp = fopen("bank.txt", "r");

    while (fread(&a, sizeof(a), 1, fp))
        printf("\nAccount No: %d, Name: %s, Balance: %.2f", a.acc_no, a.name, a.balance);

    fclose(fp);
}

int main() {
    int choice;
    do {
        printf("\n1. Create Account\n2. Display Accounts\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: createAccount(); break;
            case 2: displayAccounts(); break;
        }
    } while (choice != 3);

    return 0;
}
