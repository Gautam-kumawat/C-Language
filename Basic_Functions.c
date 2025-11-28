// //=============1. Area of Circle
// float areaOfCircle(float radius) {
//     return 3.1415 * radius * radius;
// }

// //=============2. Simple Calculator
// float calculator(float a, float b, char op) {
//     if (op == '+') return a + b;
//     if (op == '-') return a - b;
//     if (op == '*') return a * b;
//     if (op == '/') return a / b;
//     return 0;
// }

// //=============3. Check Prime Number
// int isPrime(int n) {
//     if (n <= 1) return 0;
//     for (int i = 2; i <= n/2; i++) {
//         if (n % i == 0) return 0;
//     }
//     return 1;
// }

// //=============4. Celsius to Fahrenheit
// float celsiusToFahrenheit(float c) {
//     return (c * 9/5) + 32;
// }

// //=============5. Find Maximum of Two Numbers
// int findMax(int a, int b) {
//     return (a > b) ? a : b;
// }
// //=============6. Even or Odd Checker
// int isEven(int n) {
//     return n % 2 == 0;
// }

// //=============7. Factorial (Recursion)
// int factorial(int n) {
//     if (n == 0) return 1;
//     else return n * factorial(n - 1);
// }

// //=============8. Check Palindrome String
// int isPalindrome(char str[]) {
//     int i = 0, j = strlen(str) - 1;
//     while (i < j) {
//         if (str[i] != str[j]) return 0;
//         i++;
//         j--;
//     }
//     return 1;
// }

// //=============9. Count Vowels in a String
// int countVowels(char str[]) {
//     int count = 0;
//     for (int i = 0; str[i] != '\\0'; i++) {
//         char ch = tolower(str[i]);
//         if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u') count++;
//     }
//     return count;
// }

// //=============10. Bank ATM Withdrawal Simulation
// float withdraw(float balance, float amount) {
//     if (amount > balance) {
//         printf("Insufficient Balance\\n");
//         return balance;
//     }
//     return balance - amount;
// }
