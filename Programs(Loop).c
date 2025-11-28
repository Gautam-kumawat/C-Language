// 1. Login System (Loop + if-else)
// char pass[20];
// int i;
// for (i = 0; i < 3; i++) {
//     printf("Enter password: ");
//     scanf("%s", pass);
//     if (strcmp(pass, "admin") == 0) {
//         printf("Access granted\n");
//         break;
//     } else {
//         printf("Wrong password\n");
//     }
// }
// if (i == 3) printf("Access denied\n");

// 2. ATM Menu (Loop + switch + if)
// int choice, balance = 1000, pin, attempts = 0;
// while (1) {
//     printf("\n1. Check Balance\n2. Withdraw\n3. Exit\nEnter choice: ");
//     scanf("%d", &choice);
//     switch (choice) {
//         case 1: printf("Balance = %d\n", balance); break;
//         case 2:
//             printf("Enter amount: ");
//             int amt;
//             scanf("%d", &amt);
//             if (amt <= balance) {
//                 balance -= amt;
//                 printf("Withdrawn. New balance = %d\n", balance);
//             } else {
//                 printf("Insufficient balance\n");
//             }
//             break;
//         case 3: exit(0);
//         default: printf("Invalid choice\n");
//     }
// }

// 3. Simple Calculator (loop + switch)
// char op;
// int a, b;
// do {
//     printf("Enter operator (+ - * /) and two numbers: ");
//     scanf(" %c %d %d", &op, &a, &b);
//     switch(op) {
//         case '+': printf("%d\n", a + b); break;
//         case '-': printf("%d\n", a - b); break;
//         case '*': printf("%d\n", a * b); break;
//         case '/': if (b != 0) printf("%d\n", a / b); else printf("Divide by zero!\n"); break;
//         default: printf("Invalid operator\n");
//     }
// } while(op != 'x');

// //------------4. Voting System (loop + if)
// int age, i;
// for (i = 1; i <= 5; i++) {
//     printf("Enter age of person %d: ", i);
//     scanf("%d", &age);
//     if (age >= 18) printf("Eligible to vote\n");
//     else printf("Not eligible\n");
// }

// //------------5. Student Marks and Grade (loop + if-else)
// int marks[5], i;
// for (i = 0; i < 5; i++) {
//     printf("Enter marks of student %d: ", i+1);
//     scanf("%d", &marks[i]);
//     if (marks[i] >= 90) printf("Grade A\n");
//     else if (marks[i] >= 75) printf("Grade B\n");
//     else if (marks[i] >= 50) printf("Grade C\n");
//     else printf("Fail\n");
// }

// //------------6. Multiplication Table (loop + if)
// int num;
// printf("Enter a number: ");
// scanf("%d", &num);
// if (num > 0) {
//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }
// } else {
//     printf("Enter a positive number\n");
// }

// //--------------7. Voting Count System (loop + switch)
// int vote, a = 0, b = 0, n = 0;
// for (int i = 0; i < 5; i++) {
//     printf("Vote for A=1, B=2, None=3: ");
//     scanf("%d", &vote);
//     switch(vote) {
//         case 1: a++; break;
//         case 2: b++; break;
//         case 3: n++; break;
//         default: printf("Invalid vote\n");
//     }
// }
// printf("A: %d, B: %d, None: %d\n", a, b, n);

// //-------------8. Hotel Menu with Bill (loop + switch)
// int choice, total = 0, price;
// do {
//     printf("\n1.Pizza 2.Burger 3.Dosa 4.Exit\nEnter choice: ");
//     scanf("%d", &choice);
//     switch(choice) {
//         case 1: price = 120; break;
//         case 2: price = 80; break;
//         case 3: price = 100; break;
//         case 4: continue;
//         default: price = 0; printf("Invalid\n");
//     }
//     total += price;
// } while(choice != 4);
// printf("Total Bill = %d\n", total);

// //-------------9. Number Type Counter (loop + if-else)
// int num, pos = 0, neg = 0, zero = 0;
// for (int i = 0; i < 5; i++) {
//     printf("Enter number: ");
//     scanf("%d", &num);
//     if (num > 0) pos++;
//     else if (num < 0) neg++;
//     else zero++;
// }
// printf("Positive: %d, Negative: %d, Zero: %d\n", pos, neg, zero);

// //-------------10. Shopping Discount (if-else)
// int amount;
// printf("Enter purchase amount: ");
// scanf("%d", &amount);
// if (amount >= 5000) printf("Discount: 20%%\n");
// else if (amount >= 2000) printf("Discount: 10%%\n");
// else printf("No discount\n");

// //--------------11. Number Guessing Game (loop + if)
// int guess, number = 7;
// do {
//     printf("Guess the number (1-10): ");
//     scanf("%d", &guess);
//     if (guess == number) printf("Correct!\n");
//     else printf("Try again\n");
// } while(guess != number);

// //---------------12. Attendance Percentage (loop + if-else)
// int total = 50, present, i;
// float perc;
// for (i = 0; i < 3; i++) {
//     printf("Enter days present: ");
//     scanf("%d", &present);
//     perc = (float)present / total * 100;
//     if (perc >= 75) printf("Eligible\n");
//     else printf("Not eligible\n");
// }

// //--------------13. Electricity Bill (if-else)
// int unit, bill;
// printf("Enter units: ");
// scanf("%d", &unit);
// if (unit <= 100) bill = unit * 5;
// else if (unit <= 200) bill = unit * 7;
// else bill = unit * 10;
// printf("Total bill: %d\n", bill);

// //------------14. Number Classification (loop + switch)
// int num;
// for (int i = 0; i < 3; i++) {
//     printf("Enter number: ");
//     scanf("%d", &num);
//     switch(num % 2) {
//         case 0: printf("Even\n"); break;
//         case 1: printf("Odd\n"); break;
//     }
// }

// //---------------15. Character Identification (loop + if-else)
// char ch;
// for (int i = 0; i < 3; i++) {
//     printf("Enter a character: ");
//     scanf(" %c", &ch);
//     if (ch >= 'a' && ch <= 'z') printf("Lowercase\n");
//     else if (ch >= 'A' && ch <= 'Z') printf("Uppercase\n");
//     else if (ch >= '0' && ch <= '9') printf("Digit\n");
//     else printf("Special Character\n");
// }