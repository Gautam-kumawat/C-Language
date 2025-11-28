#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice;
    char ch;

    srand(time(0));
    do {
        dice = rand() % 6 + 1;
        printf("You rolled a %d\n", dice);
        printf("Roll again? (y/n): ");
        scanf(" %c", &ch);
    } while(ch == 'y' || ch == 'Y');

    return 0;
}
