// Binary Decimal Conversion:
// Convert a hexadecimal number to binary
// Find the binary representation of a number and count the number of 1s (Hamming Weight)


// Convert a binary number to decimal
// 111111001
#include <math.h>
#include <stdio.h>
// int main(){
//     long int n=1011001;
//     long int i; int k=0,c=0;
//     for(i=n;i>0;i=i/10){
//         int r = i%10;
//         k = k+( r * ((int)pow(2,c)));
//         c++;
//     }
//     printf("%d",k);
//     return 0;
// }

// Convert a decimal number to binary
#include <string.h>
// int main(){
//     int n=871;
//     int i=0;
//     char str[20];
    
//     while(n>0){
//         int r= n%2;
//         str[i]=(char)r+'0';
//         i++;
//         n/=2;
//     }
    
//     int j;
//     for(j=strlen(str)-2;j>=0;j--) printf("%c",str[j]);
//     // str[i]='\0';
    
//     // printf("%s",str);
//     return 0;
// }

// Convert a binary number to hexadecimal
// int main(){

//     int i;
//     int n = 0b1101100111;
//     printf("%X",n);
//     return 0;
// }


// Recursion (Easy Questions):


// Print the Fibonacci series using recursion

// int fib(int n){
//     if (n==0) return 0;
//     if (n==1) return 1;
//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     int n=2;
//     printf("%d", fib(n));
// }

// Find the factorial of a number using recursion
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);

// }
// int main(){
//     printf("%d", fact(12));
// }


// Check whether a number is a palindrome using recursion

// int isPalin(int n,int *j){
//     if(n==0) return 0;
//     int r=n%10;
//     printf("%d\n",n);
//     *j=*j*10+r;
//     return n%10+isPalin(n/10,j);
// }
// int main(){
//     int n=2432;int j=0;
//     int k,l=isPalin(n,&j);
//     if(j==n){
//         printf("YES");
//     }
//     else printf("NO - %d",j);
// }

// Find the greatest common divisor (GCD) using recursion
// int gcd(int a, int b){
//     if(a==0) return b;
//     if(b==0) return a;
//     if(a>b) return gcd(a%b,b);
//     else return gcd(a,b%a);
// }
// int main(){
//     printf("%d", gcd(108,1008));
// }

// Sum of digits of a number using recursion
// int sum(int n){
//     if (n==0) return 0;
//     return (n%10) + sum(n/10);
// }
// int main(){
//     int n=2982;
//     printf("Sum is %d", sum(n));
// }

// Print numbers from 1 to N using recursion

// int printN(int n){
//     if(n==0) return 0;
//     printN(n-1);
//     printf("%d\t",n);
   
// }
// int main(){
//     printN(14);
//     }