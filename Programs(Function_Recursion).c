// //========= 1. Factorial using Recursion
// int factorial(int n) {
//     if(n <= 1) return 1;
//     return n * factorial(n - 1);
// }

// //========= 2. Fibonacci Series using Recursion
// int fib(int n) {
//     if(n <= 1) return n;
//     return fib(n-1) + fib(n-2);
// }

// //========= 3. Sum of Array Elements using Recursion
// int sum(int arr[], int n) {
//     if(n == 0) return 0;
//     return arr[n-1] + sum(arr, n-1);
// }

// //========= 4. Reverse a String using Recursion
// void reverse(char str[], int i, int j) {
//     if(i >= j) return;
//     swap(str[i], str[j]);
//     reverse(str, i+1, j-1);
// }

// //========= 5. Print Numbers from 1 to N using Recursion
// void print1toN(int n) {
//     if(n == 0) return;
//     print1toN(n-1);
//     printf("%d ", n);
// }

// //========= 6. Check if Array is Sorted using Recursion
// bool isSorted(int arr[], int n) {
//     if(n == 1) return true;
//     if(arr[n-1] < arr[n-2]) return false;
//     return isSorted(arr, n-1);
// }

// //========= 7. Find Maximum Element in Array using Recursion
// int findMax(int arr[], int n) {
//     if(n == 1) return arr[0];
//     return max(arr[n-1], findMax(arr, n-1));
// }

// //========= 8. Power Function (a^b) using Recursion
// int power(int a, int b) {
//     if(b == 0) return 1;
//     return a * power(a, b-1);
// }

// //========= 9. Sum of Digits using Recursion
// int digitSum(int n) {
//     if(n == 0) return 0;
//     return n % 10 + digitSum(n / 10);
// }

// //========= 10. Reverse a Number using Recursion
// int reverseNum(int n, int rev = 0) {
//     if(n == 0) return rev;
//     return reverseNum(n / 10, rev * 10 + n % 10);
// }

// //========= 11. Palindrome Check using Recursion
// bool isPalindrome(char str[], int i, int j) {
//     if(i >= j) return true;
//     if(str[i] != str[j]) return false;
//     return isPalindrome(str, i+1, j-1);
// }

// //========= 12. Binary Search using Recursion
// int binarySearch(int arr[], int l, int r, int key) {
//     if(l > r) return -1;
//     int mid = (l + r) / 2;
//     if(arr[mid] == key) return mid;
//     else if(key < arr[mid]) return binarySearch(arr, l, mid-1, key);
//     else return binarySearch(arr, mid+1, r, key);
// }

// //========= 13. Count Zeros in a Number using Recursion
// int countZeros(int n) {
//     if(n == 0) return 0;
//     return (n % 10 == 0 ? 1 : 0) + countZeros(n / 10);
// }

// //========= 14. Tower of Hanoi using Recursion
// void hanoi(int n, char from, char to, char aux) {
//     if(n == 1) {
//         printf("Move disk 1 from %c to %c\n", from, to);
//         return;
//     }
//     hanoi(n-1, from, aux, to);
//     printf("Move disk %d from %c to %c\n", n, from, to);
//     hanoi(n-1, aux, to, from);
// }

// //========= 15. Replace all occurrences of a character using Recursion
// void replaceChar(char str[], char ch, char rep, int i = 0) {
//     if(str[i] == '\0') return;
//     if(str[i] == ch) str[i] = rep;
//     replaceChar(str, ch, rep, i+1);
// }