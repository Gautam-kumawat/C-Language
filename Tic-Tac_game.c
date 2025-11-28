#include <stdio.h>

char board[3][3];
void resetBoard() {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            board[i][j] = '1' + i*3 + j;
}
void printBoard() {
    printf("\n");
    for(int i=0;i<3;i++) {
        printf(" %c | %c | %c\n", board[i][0], board[i][1], board[i][2]);
        if(i != 2) printf("---|---|---\n");
    }
    printf("\n");
}
int checkWin() {
    for(int i=0;i<3;i++) {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]) return 1;
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i]) return 1;
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]) return 1;
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]) return 1;
    return 0;
}

int main() {
    int pos, turn = 0;
    char mark;
    resetBoard();
    while(1) {
        printBoard();
        mark = (turn % 2 == 0) ? 'X' : 'O';
        printf("Player %d (%c), enter position (1-9): ", turn % 2 + 1, mark);
        scanf("%d", &pos);
        int row = (pos-1)/3, col = (pos-1)%3;
        if(board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = mark;
            if(checkWin()) {
                printBoard();
                printf("Player %d (%c) wins!\n", turn % 2 + 1, mark);
                break;
            }
            turn++;
            if (turn == 9) {
                printBoard();
                printf("It's a draw!\n");
                break;
            }
        } else printf("Invalid move. Try again.\n");
    }
    return 0;
}
