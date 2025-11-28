// //===========1. Swapping Two Numbers (Call by Reference)
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x = 10, y = 20;
//     swap(&x, &y);
//     printf("x = %d, y = %d", x, y);
// }

// //===========2. Dynamic Memory Allocation
// int *ptr = (int*) malloc(5 * sizeof(int));
// for (int i = 0; i < 5; i++) {
//     ptr[i] = i + 1;
// }

// //===========3. Accessing and Modifying Strings
// void printString(char *str) {
//     while (*str != '\\0') {
//         printf("%c", *str);
//         str++;
//     }
// }

// //===========4. Building Linked Lists
// struct Node {
//     int data;
//     struct Node *next;
// };

// //===========5. Efficient Array Traversal
// int arr[] = {1, 2, 3, 4};
// int *p = arr;
// for (int i = 0; i < 4; i++) {
//     printf("%d ", *(p+i));
// }

// //===========6. Handling Large Data (Files/Images)
// char *buffer = (char*) malloc(fileSize * sizeof(char));
// fread(buffer, sizeof(char), fileSize, filePtr);

// //===========7. Sending Data to Functions (Without Copying)
// void processArray(int *arr, int size);

// //===========8. Creating Trees and Graphs
// struct TreeNode {
//     int value;
//     struct TreeNode *left;
//     struct TreeNode *right;
// };

// //===========9. Memory Sharing Between Functions
// void addTen(int *n) {
//     *n += 10;
// }

// //===========10. Pointer to Functions (Callback Functions)
// void greet() {
//     printf("Hello World!");
// }

// void execute(void (*fptr)()) {
//     fptr();
// }

// int main() {
//     execute(greet);
// }