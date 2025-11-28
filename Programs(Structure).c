#include<stdio.h>
#include<string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {1, "Amit", 85.5};
    
    printf("Roll No: %d\\n", s1.rollNo);
    printf("Name: %s\\n", s1.name);
    printf("Marks: %.2f\\n", s1.marks);
    
    return 0;
}





// //===========1. Student Record Management System
// Problem:
// You need to store multiple details (like roll number, name, marks) of students.

// Structure:
// struct Student {
//     int rollNo;
//     char name[50];
//     float marks;
// };
// //===========Example Usage:
// #include <stdio.h>
// #include <string.h>

// struct Student {
//     int rollNo;
//     char name[50];
//     float marks;
// };

// int main() {
//     struct Student s1 = {1, "Amit", 85.5};
//     struct Student s2 = {2, "Sita", 90.0};

//     printf("Student 1: %d %s %.2f\n", s1.rollNo, s1.name, s1.marks);
//     printf("Student 2: %d %s %.2f\n", s2.rollNo, s2.name, s2.marks);

//     return 0;
// }

// //=========== Employee Payroll System
// Problem:
// In a company, each employee has a salary, department, and joining date.

// Structure:
// struct Employee {
//     int empId;
//     char name[50];
//     float salary;
//     char department[30];
//     char joiningDate[20];
// };
// //===========Example Usage:
// #include <stdio.h>
// #include <string.h>

// struct Employee {
//     int empId;
//     char name[50];
//     float salary;
//     char department[30];
//     char joiningDate[20];
// };

// int main() {
//     struct Employee e1 = {101, "John", 50000.0, "Finance", "01/02/2020"};
//     struct Employee e2 = {102, "Jane", 60000.0, "HR", "15/03/2021"};

//     printf("Employee 1: %d %s %.2f %s %s\n", e1.empId, e1.name, e1.salary, e1.department, e1.joiningDate);
//     printf("Employee 2: %d %s %.2f %s %s\n", e2.empId, e2.name, e2.salary, e2.department, e2.joiningDate);

//     return 0;
// }

// //=========== Bank Account Information
// Problem:
// A bank needs to store account details (account number, balance, account holder’s name).

// Structure:
// struct BankAccount {
//     int accountNo;
//     char holderName[50];
//     float balance;
// };
// //===========Example Usage:
// #include <stdio.h>

// struct BankAccount {
//     int accountNo;
//     char holderName[50];
//     float balance;
// };

// int main() {
//     struct BankAccount account1 = {12345, "Raj", 1500.75};
//     struct BankAccount account2 = {67890, "Neha", 2000.50};

//     printf("Account 1: %d %s %.2f\n", account1.accountNo, account1.holderName, account1.balance);
//     printf("Account 2: %d %s %.2f\n", account2.accountNo, account2.holderName, account2.balance);

//     return 0;
// }

// //=========== Product Information in an E-Commerce Platform
// Problem:
// You want to store information about products (name, price, stock count).

// Structure:
// struct Product {
//     char name[100];
//     float price;
//     int stockCount;
// };
// //===========Example Usage:
// #include <stdio.h>

// struct Product {
//     char name[100];
//     float price;
//     int stockCount;
// };

// int main() {
//     struct Product p1 = {"Laptop", 55000.99, 15};
//     struct Product p2 = {"Smartphone", 25000.50, 30};

//     printf("Product 1: %s %.2f %d\n", p1.name, p1.price, p1.stockCount);
//     printf("Product 2: %s %.2f %d\n", p2.name, p2.price, p2.stockCount);

//     return 0;
// }

// //===========5. Vehicle Registration Information
// Problem:
// A system for storing vehicle registration details (vehicle number, owner’s name, model).

// Structure:
// struct Vehicle {
//     char vehicleNumber[20];
//     char ownerName[50];
//     char model[50];
// };
// //===========Example Usage:
// #include <stdio.h>

// struct Vehicle {
//     char vehicleNumber[20];
//     char ownerName[50];
//     char model[50];
// };

// int main() {
//     struct Vehicle v1 = {"DL-12AB-3456", "Rahul", "Toyota"};
//     struct Vehicle v2 = {"UP-14CD-6789", "Pooja", "Honda"};

//     printf("Vehicle 1: %s %s %s\n", v1.vehicleNumber, v1.ownerName, v1.model);
//     printf("Vehicle 2: %s %s %s\n", v2.vehicleNumber, v2.ownerName, v2.model);

//     return 0;
// }

// //===========6. Date Information for Events
// Problem:
// To store and manage event dates in a calendar app (day, month, year).

// Structure:
// struct Date {
//     int day;
//     int month;
//     int year;
// };
// //===========Example Usage:
// #include <stdio.h>

// struct Date {
//     int day;
//     int month;
//     int year;
// };

// int main() {
//     struct Date event1 = {25, 12, 2022};
//     struct Date event2 = {15, 8, 2023};

//     printf("Event 1: %02d/%02d/%d\n", event1.day, event1.month, event1.year);
//     printf("Event 2: %02d/%02d/%d\n", event2.day, event2.month, event2.year);

//     return 0;
// }

// //===========7. Library Book Information
// Problem:
// In a library system, you need to store book details (title, author, ISBN).

// Structure:
// struct Book {
//     char title[100];
//     char author[50];
//     char isbn[20];
// };
// //===========Example Usage:
// #include <stdio.h>

// struct Book {
//     char title[100];
//     char author[50];
//     char isbn[20];
// };

// int main() {
//     struct Book book1 = {"C Programming", "Dennis Ritchie", "978-0131103627"};
//     struct Book book2 = {"Data Structures", "Mark Allen Weiss", "978-0321544207"};

//     printf("Book 1: %s %s %s\n", book1.title, book1.author, book1.isbn);
//     printf("Book 2: %s %s %s\n", book2.title, book2.author, book2.isbn);

//     return 0;
// }