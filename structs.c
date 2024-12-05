// Easy Programs







// Intermediate Programs
// Dynamic Memory Allocation with Structs
// Create a struct Employee with fields name, id, and salary. Dynamically allocate memory for an array of Employee structs and populate it with user input.

// Sorting an Array of Structs
// Define a struct Student with fields name, roll_number, and marks. Write a program to sort an array of Student structs based on marks.

// Struct with Pointers
// Create a struct Node representing a node in a linked list. Write a program to implement basic operations like insertion and traversal in a singly linked list using the struct.

// File Handling with Structs
// Write a program to store the details of books (title, author, price) in a file using a struct. Then, read the details back and display them.

// Union vs. Struct
// Define a struct and a union both containing an int, float, and char. Write a program to demonstrate the memory differences between the struct and the union.

// Struct with Functions
// Define a struct Rectangle with fields length and breadth. Write functions to calculate the area and perimeter of the rectangle using the struct.

// Binary Search with Structs
// Create a struct Employee with fields id, name, and salary. Write a program to perform a binary search on an array of Employee structs based on the id.

// Struct with Bit Fields
// Define a struct Flags with bit fields to represent options like is_admin, is_active, and is_verified. Write a program to demonstrate how to set and check these flags.

// Complex Numbers Using Structs
// Create a struct Complex with fields real and imaginary. Write functions to add, subtract, multiply, and divide two complex numbers.

// Inventory Management System
// Use a struct to represent an item in an inventory with fields like item_id, name, quantity, and price. Write a program to manage the inventory (add, delete, search, and update items).



// Basic Struct Definition and Access
// Define a struct Person with fields name, age, and gender. Write a program to input and display the details of a person.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// struct Person{
//     char name[20];
//     int age;
//     char gender;
// };
// int main(){
//     printf("Enter Name, age and gender\n");
//     struct Person p1;
//     gets(p1.name);

//     // fflush(stdin);
//     scanf("%d", &p1.age);
//     fflush(stdin);
//     scanf("%c",&p1.gender);
//     fflush(stdin);
//     printf("\nName: %s\nAge: %d\nGender: %c", p1.name,p1.age,p1.gender);

// }


// Struct Array
// Create an array of structs to store details of 5 students (name, roll number, and marks). Print the details.
// struct Student{
//     char name[20];
//     int rn;
//     float marks;
// };
// int main(){
//     struct Student s[5];
//     int i;
//     printf("Enter Name, Roll, and Marks of 5 students\n");
//     for(i=0;i<5;i++){
//         gets(s[i].name);
//         scanf("%d",&s[i].rn);
//         scanf("%f",&s[i].marks);
//         fflush(stdin);
//     }
//     for(i=0;i<5;i++){
//         printf("\nName: %s, Roll# %d, Marks: %.2f \n", s[i].name, s[i].rn, s[i].marks);
//     }

// }


// Struct as Function Parameter
// Write a program to pass a struct to a function and display its contents.
// struct Student{
//     char name[20];
//     int age;
// };
// void printStruct(struct Student* s){
//     printf("Name:%s\nAge:%d", (*s).name,s->age);
// }
// int main(){
//     struct Student s;
//     strcpy(s.name,"Chaitanya Mishra");
//     s.age=27;

//     printStruct(&s);

// }


// Nested Structs
// Create a struct Address with fields street, city, and zip. Create another struct Person containing name, 
// age, and an Address field. Write a program to display a person's details including their address.
// struct Address{
//     char street[50];
//     char city[20];
//     int zip;
// };
// struct Person{
//     char name[20];
//     int age;
//     struct Address *a;
// } p1;
// int main(){
//     p1.a = (struct Address*)malloc(sizeof(struct Address));
//     strcpy(p1.a->street,"Radha Soami Satsang Beas Road");
//     strcpy(p1.a->city,"Lucknow");
//     p1.a->zip = 226010;

//     strcpy(p1.name,"Chaitanya Mishra");
//     p1.age=28;
//     printf("Details of %s:\n", p1.name);
//     printf("%s, %s - %d", p1.a->street, p1.a->street, p1.a->zip);
//     printf("\nAge:%d",p1.age);
//     free(p1.a);
// }




// Comparison of Two Structs
// Define a struct Point with fields x and y. Write a function to compare two Point structs for equality.
struct Points{
    int x;
    int y;
};
int main(){
    struct Points p1;
    struct Points p2;

    int i;
    printf("Enter the point 1: X and Y\n");
    scanf("%d",&p1.x);
    scanf("%d",&p1.y);
    printf("Enter the point 2 X and Y\n");
    scanf("%d",&p2.x);
    scanf("%d",&p2.y);

    if(p1.x==p2.x && p2.y==p1.y){
        printf("They are smae points");
    }
    else printf("Different");

}