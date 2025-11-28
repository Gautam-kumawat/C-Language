#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *choices[] = {"Rock", "Paper", "Scissors"};
    int user, comp;

    printf("Choose:\n0. Rock\n1. Paper\n2. Scissors\nYour choice: ");
    scanf("%d", &user);

    srand(time(0));
    comp = rand() % 3;

    printf("Computer chose %s\n", choices[comp]);

    if (user == comp)
        printf("It's a draw!\n");
    else if ((user == 0 && comp == 2) || (user == 1 && comp == 0) || (user == 2 && comp == 1))
        printf("You win!\n");
    else
        printf("You lose!\n");

    return 0;
}
