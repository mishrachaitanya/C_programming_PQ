 // Write a Program to Replace all 0’s with 1’s in a Number.
#include <stdio.h>
// int main(){

//     long int i,n=1240522;
//     int c=0,j=0,r=0;
//     for(i=n;i>0;i=i/10){
//         r=i%10;
//         if(r==0) {
//             j=j*10+1;
//         }
//         else 
//         j=j*10+r;
//     }
//     int k2=0;
//     int k=j,k1=0;
//     for(i=k;i>0;i/=10){
//         k2=i%10;
//         k1=k1*10+k2;
//     }
//     printf("%d",k1);

// }


// Write a C program to find the GCD of two numbers. (greatest common integer)
// #include <stdio.h>

// int main() {
//     unsigned int num;
//     // Read hexadecimal input from the user
//     printf("Enter a hexadecimal number: ");
//     scanf("%x", &num);

//     // Extract each byte from the integer (big-endian order)
//     unsigned char byte1 = (num >> 24);  // Most significant byte
//     unsigned char byte2 = (num >> 16);// & 0xFF;
//     unsigned char byte3 = (num >> 8); //& 0xFF;
//     unsigned char byte4 = num ;//& 0xFF;         // Least significant byte

//     // Print each byte in hexadecimal format
//     printf("%02X\n", byte1);
//     printf("%02X\n", byte2);
//     printf("%02X\n", byte3);
//     printf("%02X\n", byte4);

//     return 0;
// }


// An unsigned short integer in 8-digit hexadecimal format.
// Output:

// Display the hexadecimal representation of the input integer after swapping its bytes.
// Sample Input

// 12345678
// Sample Output

// 56781234

#include <string.h>
#include <stdlib.h>
// int main(){
//     unsigned int n= 12345678;
//     char str[20];
//     sprintf(str,"%u",n);
//     printf("%s\n",str);
//     int i;
//     for(i=(strlen(str) )/2;i<=strlen(str)-1;i++){
//         printf("%c",str[i]);
//     }
//     for(i=0;i<strlen(str)/2;i++) printf("%c",str[i]);
// }


// int main(){
//     unsigned int n=12345678;

//     unsigned char *b = (unsigned char*) &n;
//     printf("%x\n" ,b[3]);
//     printf("%x\n" ,b[2]);
//     printf("%x" ,b[1]);

//     // printf("%d %d %d",k1,k2,k3);
// }
// int fib(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return fib(n-1)+fib(n-2);
// }

// int main(){

//     int i,sum=0;
//     for(i=1;i<=5;i++){
//         sum += fib(i);
//     }
//     printf("%d",sum);

// }
// int sum(int n){
//     if (n==0) return 0;
//     return n+sum(n-1);
// }

// int main(){
//     printf("%d",sum(5));
// }

// int sumofDigit(int n ){
//     if(n==0) return 0;
//     int r=n%10;
//     if(r%2==0)
//     return r+sumofDigit(n/10);
//     else
//     return 0+sumofDigit(n/10);
// }
// int main(){
//     int a;
//     printf("%d", sumofDigit(52321));
// }


//Program to print perfect numbers in given range using functions
// If sum of proper positive divisors equals to given number then the number is
// perfect number.

// int main(){
//     int n1,n,s=0;
//     scanf("%d",&n1);
//     int i;
//     for(n=1;n<=n1;n++){
//         s=0;
//     for(i=1;i<n;i++){
//         if(n%i==0) s+=i;
//     }
//     if(s==n) printf("%d is PerfecT!!\n",s);
//     // else printf("NOOO");
//     }
// }

// 1. Print ASCII Value of a Character Using Format Specifier.
// int main(){
//     char c;
//     scanf("%c",&c);
//     printf("%d",c);
//     return 0;
// }
// // 2. C Program to Swap Two Numbers
// int main(){
//     int a=67,b=45;
//     b = a+b;
//     a = b -a;
//     b = b-a;
//     printf("A=67 has become a=%d and B=45 has become b = %d",a,b);
// }


/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1 
*/

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=i;j>=1;j--){
//             if(j>1)
//             printf("%d ",j);
//             else
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     for(i=4;i>=1;i--){
//         for(j=i;j>=1;j--){
//             if(j>1)
//             printf("%d ",j);
//             else 
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }


/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             if(j<i)
//             printf("%d ",j);
//             else
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     for(i=4;i>=1;i--){
//         for(j=i;j>=1;j--){
//             if(j>1)
//             printf("%d ",j);
//             else
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

/*
// Armstrong Number

An Armstrong number is an n-
digit number if the sum of its digits, each raised to the power of n, is equal to the original

number itself.
*/

// int armstrong(int n){
//     if(n==0) return n;
//     int r=n%10;

//     return r*r*r + armstrong(n/10); 
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     // printf("%d",armstrong(n));
//     for(int i=1;i<=n;i++){
//     if(armstrong(i)==i){
//         printf("%d\n",i);
//     }}
    
// }

//Hex into a Big Endian 

// int main(){

//     long int n;//=0x1121ABCD;
//     scanf("%x",&n);
//     unsigned char *c = (unsigned char*) &n;
//     printf("%c\n",c[3]);
//     printf("%c\n",c[2]);
//     printf("%c\n",c[1]);
//     printf("%c",c[0]);
//     return 0;
// }

//Binary to Decimal
// #include <math.h>
// int main(){

//     long int n;
//     scanf("%ld",&n);
//     // printf("%ld",n);
//     long int i;
//     int j=0,c=0;
//     while(n>0){
//         int r= n%2;
//         // printf("%d\t",r);
//         j = j+ r*pow(2,c);
//         c++;
//         n/=10;
//         // printf("%d",r);
//     }
//     // for (i=0;i<c;i++){
//         printf("%d", j);
//     // }
//     return 0;
// }
 

 //GCD using recursion
int gdc(int a, int b){

    if(a==0) return b;
    if(b==0) return a;

    if(a>b) gdc(a%b,b);
    else if(b>a)  gdc(a,b%a);

}

 int     main(){

    int a,b;
    scanf("%d %d",&a, &b);
    printf("%d",gdc(a,b));
 }


