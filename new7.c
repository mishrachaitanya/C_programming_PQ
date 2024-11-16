// Basic Pointer Operations
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Print the address of a variable using pointers.
// int main(){
//     int n=25;
//     int *p= &n;
//     printf("%d at address %d",*p,p);
// }


// Write a program to demonstrate null pointers and avoid dereferencing them.
// int main(){
//     int *ptr=NULL;
//     if(ptr==NULL)
//     printf("Null");
// }


// Use a pointer to change the value of a variable.
// void changeValue(int *n){

//     *n=24;

// }
// int main(){
//     int v = 25;
//     int k = v;
//     changeValue(&v);
//     printf("Previous value %d ---> Changed Value :%d",k,v);
// }



// Write a program to demonstrate pointer arithmetic (increment, decrement).
// void incr(char* c, int size){
//     int i;
//     for (i=0;i<size;i++){
//         printf("%c",*c--);
//     }
    
// }

// int main(){
//     char c[30];
//     printf("Enter the string\n");
//     scanf("%s",&c);

//     int size= strlen(c);
//     incr(&c[size-1] ,size);

// }
////////////
// Pointers with Functions

// Write a program to demonstrate pointer to a function (function pointer).


// Swap two numbers using call-by-reference (pointers in functions).
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a= *b;
//     *b = temp;
// }

// int main(){
//     int a,b;
//     printf("Enter the two number \n ");
//     scanf("%d %d",&a,&b);

//     printf("Number before swapping A=%d B=%d\n",a,b);
//     swap(&a,&b);
//     printf("Numbers after swapping: A=%d B=%d",a,b);
// }



// Create a function to calculate the length of a string using pointers.
// int length(char *str){
//     int i,size=0;char ch;
    
   
//      while (*str != '\0') {
//         size++;  // Increment the length for each character
//         str++;   // Move the pointer to the next character
//     }
    
//     return size;
// }

// int main(){
//     char str[30];
//     printf("Enter the string\n");
//     scanf("%s", str);
//     int size = length(str);
//     printf("Length of the string is %d", size);
// }
