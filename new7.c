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


//Display Char at kth location
// char location(char *c, int k){
//     return *(c+k-1);
// }

// int main(){
//     char a[100];
//     printf("Enter the sentence\n");
//     scanf("%s",a);
//     // int k=0;
//     // printf("Enter the position\n");
//     // scanf("%d",k);

//     printf("%c",location(&a[0],2));
// }


// #Exploring different specifiers
// int main(){

    // double k;
    // scanf("%Lf", &k);
    // printf("%.4Lf",k);

    // printf("Check it out!!\n");

    // float k1;
    // scanf("%f",&k1);
    // printf("%.3f",k1);
    // long int n;
    // scanf("%ld",&n);
    // printf("%ld\n",n);

    // unsigned int a1;
    // scanf("%u",&a1);
    // printf("%u\n",a1);

    // unsigned long int k2;
    // scanf("%lu",&k2);
    // printf("%lu\n",k2);

    // unsigned int k3;
    // scanf("%x",&k3);
    // printf("%0X",k3);
// }


// //Convert hexadecimal to binary
// int main(){
//     unsigned int hex;
//     scanf("%x",&hex);
//     char str[30];
//     sprintf(str,"%X", hex);
//     int size= strlen(str);
//     int i;
//     for(i=0;i<size;i++){
//         switch(str[i]){
//             case 'A': printf("1010"); break;
//             case 'B' : printf("1011"); break;
//             case 'C' : printf("1100"); break;
//             case 'D' : printf("1101"); break;
//             case 'E':printf("1111"); break;
//             case '0': printf("0000"); break;
//             case '1': printf("0001");break;
//             case '2':printf("0010"); break;
//             case '3':printf("0011"); break;
//             case '4':printf("0100"); break;
//             case '5':printf("0101"); break;
//             case '6':printf("0110"); break;
//             case '7':printf("0111"); break;
//             case '8':printf("1000"); break;
//             case '9':printf("1001"); break;
            
//         }
//     }
//     // printf("%d",size);
//     }