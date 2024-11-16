


//Check whether a number is prime
// #include <stdio.h>
// int main(){
//     int n=81;
//     int i,c=0;
//     for(i=1;i<=n;i++){
//         if(n%i==0) c++;
//     }
//     if (c==2) printf("Prime");
//     else printf("NOT");
// }

// Find the factorial of a number using a loop
// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// int main(){
//     int i,f=1; 
//     int n=2;
//     if(n==0) printf("1");
//     for(i=1;i<=n;i++)
//     f*=i;
//     printf("%d",f);
// }

// Check if a number is a palindrome
#include <stdio.h>
// int main(){
//     int i,n=34543; int k=n;
//     int j=0,r=0;
//     while(n>0){
//         r = n%10;
//         j = j*10+r;
//         n = n/10;
//     }
//     if(j==k) printf("Palindrome");
//     else printf("Not");
//     return 0;
// }


// Print the Fibonacci series up to n terms
// #include <stdio.h>
// int fib(int n){
//     if (n==1) return 1;
//     if (n==2) return 1;
//     // printf("%d",n);
//     return fib(n-1) + fib(n-2);
// }
// int main(){
//     printf("%d",fib(15));
//     return 0;
// }

// Sum of digits of a number
// int main(){
//     int n=243;
//     int i,sum=0;
//     while(n>0){
//         int r= n%10;
//         sum += r;
//         n/=10;
//     }
//     printf("SUM is %d",sum);
// }


// Find the greatest common divisor (GCD) of two numbers
// int gcd(int a, int b){
//     if (a==0) return b;
//     if (b==0) return a;
//     if(a>b) gcd(a%b,b);
//     else gcd(a,b%a);
// }

// int main(){
//     printf("%d",gcd(30,150));
//     return 0;
// }

// Find the least common multiple (LCM) of two numbers
// int main(){

//     int a=24,b=32;
//     int max=a,k=0;
//     if(b>a) max=b;
//     for (int i=1;i<a*b;i++){
//         if(max%a==0 && max%b==0) {
//             k=max;
//             break;
//         }max++;
//     }
//     printf("%d", k);
//     return 0;
// }
// #include <string.h>
// // Count the number of vowels and consonants in a string
// int main(){
//     char str[100];
//     scanf("%s",str);
//     int i,c=0,len=strlen(str);
//     for(i = 0; i < len; i++) {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
//            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
//             c++;
//         }
//     }
//     printf("%d",c);
// }

// Reverse a number
// int main(){

//     int i,n=234,r=0,j=0;
//     while (n>0){
//         r=n%10;
//         j=j*10+r;
//         n/=10;
//     }
//     printf("%d",j);
// }