#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %s", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (operator == '+') {
        result = add(num1, num2);
        printf("Result: %.2f\n", result);
    } else if (operator == '-') {
        result = subtract(num1, num2);
        printf("Result: %.2f\n", result);
    } else if (operator == '*') {
        result = multiply(num1, num2);
        printf("Result: %.2f\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = divide(num1, num2);
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
