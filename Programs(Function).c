// //==============1. Sum of Array Elements Using Function
// int sum(int arr[], int size) {
//     int total = 0;
//     for (int i = 0; i < size; i++) {
//         total += arr[i];
//     }
//     return total;
// }
// int main() {
//     int data[5] = {10, 20, 30, 40, 50};
//     printf("Sum: %d\n", sum(data, 5));
// }

// //==============2. Average of Marks
// float average(int marks[], int n) {
//     int total = 0;
//     for (int i = 0; i < n; i++) total += marks[i];
//     return (float)total / n;
// }
// int main() {
//     int marks[4] = {85, 90, 78, 92};
//     printf("Average: %.2f\n", average(marks, 4));
// }

// //==============3. Find Maximum Number
// int findMax(int arr[], int n) {
//     int max = arr[0];
//     for (int i = 1; i < n; i++)
//         if (arr[i] > max) max = arr[i];
//     return max;
// }
// int main() {
//     int numbers[5] = {12, 45, 67, 89, 23};
//     printf("Max: %d\n", findMax(numbers, 5));
// }

// //==============4. Find Minimum Number
// int findMin(int arr[], int n) {
//     int min = arr[0];
//     for (int i = 1; i < n; i++)
//         if (arr[i] < min) min = arr[i];
//     return min;
// }
// int main() {
//     int numbers[5] = {22, 11, 9, 18, 33};
//     printf("Min: %d\n", findMin(numbers, 5));
// }

// //==============5. Count Even Numbers
// int countEven(int arr[], int n) {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//         if (arr[i] % 2 == 0) count++;
//     return count;
// }
// int main() {
//     int a[6] = {2, 7, 4, 9, 10, 15};
//     printf("Even count: %d\n", countEven(a, 6));
// }

// //==============6. Reverse Array Print
// void printReverse(int arr[], int n) {
//     for (int i = n - 1; i >= 0; i--)
//         printf("%d ", arr[i]);
//     printf("\n");
// }
// int main() {
//     int nums[5] = {10, 20, 30, 40, 50};
//     printReverse(nums, 5);
// }

// //==============7. Search Element
// int search(int arr[], int n, int key) {
//     for (int i = 0; i < n; i++)
//         if (arr[i] == key) return i;
//     return -1;
// }
// int main() {
//     int arr[5] = {1, 3, 5, 7, 9};
//     int index = search(arr, 5, 5);
//     if (index != -1) printf("Found at index %d\n", index);
//     else printf("Not found\n");
// }

// //==============8. Copy Array
// void copyArray(int src[], int dest[], int n) {
//     for (int i = 0; i < n; i++)
//         dest[i] = src[i];
// }
// int main() {
//     int a[3] = {4, 8, 12}, b[3];
//     copyArray(a, b, 3);
//     for (int i = 0; i < 3; i++) printf("%d ", b[i]);
//     printf("\n");
// }

// //==============9. Count Positive and Negative
// void countPosNeg(int arr[], int n) {
//     int pos = 0, neg = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] >= 0) pos++;
//         else neg++;
//     }
//     printf("Positive: %d, Negative: %d\n", pos, neg);
// }
// int main() {
//     int arr[6] = {-1, 2, 3, -4, 0, 6};
//     countPosNeg(arr, 6);
// }

// //==============10. Calculate Factorials and Store
// int factorial(int n) {
//     int f = 1;
//     for (int i = 1; i <= n; i++)
//         f *= i;
//     return f;
// }
// int main() {
//     int facts[5];
//     for (int i = 0; i < 5; i++)
//         facts[i] = factorial(i + 1);
//     for (int i = 0; i < 5; i++)
//         printf("%d! = %d\n", i+1, facts[i]);
// }

// //==============11. Check Prime Numbers
// int isPrime(int num) {
//     if (num <= 1) return 0;
//     for (int i = 2; i <= num / 2; i++)
//         if (num % i == 0) return 0;
//     return 1;
// }
// int main() {
//     int primes[5] = {2, 4, 5, 9, 11};
//     for (int i = 0; i < 5; i++) {
//         if (isPrime(primes[i])) printf("%d is prime\n", primes[i]);
//         else printf("%d is not prime\n", primes[i]);
//     }
// }

// //==============12. Count Digits in Array Elements
// int countDigits(int n) {
//     int count = 0;
//     while (n != 0) {
//         count++;
//         n /= 10;
//     }
//     return count;
// }
// int main() {
//     int nums[4] = {10, 200, 3, 4567};
//     for (int i = 0; i < 4; i++) {
//         printf("Digits in %d: %d\n", nums[i], countDigits(nums[i]));
//     }
// }

// //==============13. Swap Array Elements in Pairs
// void swapPairs(int arr[], int n) {
//     for (int i = 0; i < n - 1; i += 2) {
//         int temp = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1] = temp;
//     }
// }
// int main() {
//     int data[6] = {1, 2, 3, 4, 5, 6};
//     swapPairs(data, 6);
//     for (int i = 0; i < 6; i++) printf("%d ", data[i]);
//     printf("\n");
// }

// //==============14. Merge Two Arrays
// void mergeArrays(int a[], int b[], int merged[], int size) {
//     for (int i = 0; i < size; i++) {
//         merged[i] = a[i];
//         merged[i + size] = b[i];
//     }
// }
// int main() {
//     int a[3] = {1, 2, 3}, b[3] = {4, 5, 6}, merged[6];
//     mergeArrays(a, b, merged, 3);
//     for (int i = 0; i < 6; i++) printf("%d ", merged[i]);
//     printf("\n");
// }

// //==============15. Find Frequency of Each Element
// void findFrequency(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         int count = 1;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 arr[j] = -1; // Mark visited
//             }
//         }
//         if (arr[i] != -1)
//             printf("%d occurs %d times\n", arr[i], count);
//     }
// }
// int main() {
//     int nums[6] = {2, 3, 2, 4, 3, 5};
//     findFrequency(nums, 6);W
// }