#include <stdio.h>

void startQuiz() {
    int answer, score = 0;

    printf("Q1. What is the capital of India?\n1. Mumbai\n2. Delhi\n3. Kolkata\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("Q2. Which language is used for system programming?\n1. C\n2. Python\n3. JavaScript\n");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("Q3. 2 + 2 = ?\n1. 3\n2. 4\n3. 5\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("\nYour Score: %d/3\n", score);
}

int main() {
    startQuiz();
    return 0;
}
