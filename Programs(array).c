// //---------- 1. Student Marks and Grades
// int marks[5];
// for (int i = 0; i < 5; i++) {
//     printf("Enter marks of student %d: ", i + 1);
//     scanf("%d", &marks[i]);
//     if (marks[i] >= 90) printf("Grade A\n");
//     else if (marks[i] >= 75) printf("Grade B\n");
//     else if (marks[i] >= 50) printf("Grade C\n");
//     else printf("Fail\n");
// }

// //---------- 2. Voting Count Using Array
// int votes[5];
// int countA = 0, countB = 0;
// for (int i = 0; i < 5; i++) {
//     printf("Vote for Candidate (1 for A, 2 for B): ");
//     scanf("%d", &votes[i]);
//     if (votes[i] == 1) countA++;
//     else if (votes[i] == 2) countB++;
//     else printf("Invalid vote\n");
// }
// printf("Total Votes - A: %d, B: %d\n", countA, countB);

// //---------- 3. Menu Price Billing
// int choice[3], total = 0;
// for (int i = 0; i < 3; i++) {
//     printf("1. Pizza 2. Burger 3. Dosa\nEnter your choice: ");
//     scanf("%d", &choice[i]);
//     switch (choice[i]) {
//         case 1: total += 150; break;
//         case 2: total += 100; break;
//         case 3: total += 80; break;
//         default: printf("Invalid item\n");
//     }
// }
// printf("Total Bill: %d\n", total);

// //---------- 4. Count Even and Odd Numbers
// int numbers[6] = {10, 13, 22, 17, 6, 9};
// int even = 0, odd = 0;
// for (int i = 0; i < 6; i++) {
//     if (numbers[i] % 2 == 0) even++;
//     else odd++;
// }
// printf("Even: %d, Odd: %d\n", even, odd);

// //---------- 5. Electricity Bill Slabs
// int units[4] = {80, 150, 210, 90};
// for (int i = 0; i < 4; i++) {
//     int bill;
//     if (units[i] <= 100) bill = units[i] * 5;
//     else if (units[i] <= 200) bill = units[i] * 7;
//     else bill = units[i] * 10;
//     printf("Bill for %d units: Rs %d\n", units[i], bill);
// }

// //---------- 6. Student Attendance Percentage
// int present[3] = {40, 30, 20};
// int total = 50;
// for (int i = 0; i < 3; i++) {
//     float perc = (float)present[i] / total * 100;
//     if (perc >= 75) printf("Student %d is eligible\n", i+1);
//     else printf("Student %d is not eligible\n", i+1);
// }

// //---------- 7. Character Type Identifier
// char ch[4] = {'a', 'Z', '3', '#'};
// for (int i = 0; i < 4; i++) {
//     if (ch[i] >= 'a' && ch[i] <= 'z') printf("Lowercase\n");
//     else if (ch[i] >= 'A' && ch[i] <= 'Z') printf("Uppercase\n");
//     else if (ch[i] >= '0' && ch[i] <= '9') printf("Digit\n");
//     else printf("Special character\n");
// }

// //---------- 8. Number Classification (Negative, Positive, Zero)
// int arr[5] = {-2, 0, 5, -7, 10};
// for (int i = 0; i < 5; i++) {
//     if (arr[i] > 0) printf("Positive\n");
//     else if (arr[i] < 0) printf("Negative\n");
//     else printf("Zero\n");
// }

// //---------- 9. Grade with switch-case
// int scores[3] = {92, 76, 55};
// for (int i = 0; i < 3; i++) {
//     int grade;
//     if (scores[i] >= 90) grade = 1;
//     else if (scores[i] >= 75) grade = 2;
//     else if (scores[i] >= 50) grade = 3;
//     else grade = 4;
//     switch (grade) {
//         case 1: printf("Grade A\n"); break;
//         case 2: printf("Grade B\n"); break;
//         case 3: printf("Grade C\n"); break;
//         case 4: printf("Fail\n"); break;
//     }
// }

// //---------- 10. Salary Tax Brackets
// int salaries[3] = {30000, 60000, 120000};
// for (int i = 0; i < 3; i++) {
//     if (salaries[i] <= 50000) printf("No Tax\n");
//     else if (salaries[i] <= 100000) printf("Tax = 10%%\n");
//     else printf("Tax = 20%%\n");
// }
// //---------- 11. Temperature Categorization
// float temps[4] = {36.2, 38.5, 37.1, 39.0};
// for (int i = 0; i < 4; i++) {
//     if (temps[i] > 38) printf("High Fever\n");
//     else if (temps[i] >= 37) printf("Slight Fever\n");
//     else printf("Normal\n");
// }

// //---------- 12. Age Group Classification
// int ages[5] = {5, 17, 20, 45, 70};
// for (int i = 0; i < 5; i++) {
//     if (ages[i] < 13) printf("Child\n");
//     else if (ages[i] < 20) printf("Teenager\n");
//     else if (ages[i] < 60) printf("Adult\n");
//     else printf("Senior Citizen\n");
// }

// //---------- 13. Find Max and Min
// int nums[5] = {10, 45, 23, 88, 16};
// int max = nums[0], min = nums[0];
// for (int i = 1; i < 5; i++) {
//     if (nums[i] > max) max = nums[i];
//     if (nums[i] < min) min = nums[i];
// }
// printf("Max: %d, Min: %d\n", max, min);
// //---------- 14. Reverse Array Elements
// int arr[5] = {10, 20, 30, 40, 50};
// for (int i = 4; i >= 0; i--) {
//     printf("%d ", arr[i]);
// }

// //---------- 15. Search an Element
// int arr[5] = {10, 25, 40, 55, 70};
// int key = 40, found = 0;
// for (int i = 0; i < 5; i++) {
//     if (arr[i] == key) {
//         found = 1;
//         printf("Element found at index %d\n", i);
//         break;
//     }
// }
// if (!found) printf("Element not found\n");
