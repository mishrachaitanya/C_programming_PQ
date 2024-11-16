#include <stdio.h>
#include <math.h>
// Binary Decimal Conversion:


// Convert a binary number to decimal

// int main(){

//     long int n=111100101;
//     long int i; int sum=0,power=0;
//     for(i=n;i>0;i=i/10){

//         int r=i%10;
//         printf("%d\t",r);
//         sum += r*pow(2,power);
//         power++;

//     }
//     printf("Decimal number is %d",sum);

// }


// Convert a decimal number to binary
// #include <string.h>
// #include <stdlib.h>
// int main(){
//     int n=485;
//     int i,k=0,j=0;
//     while(n>0){
//         k = n%2;
//         j = j*10+k;
//         n/=2;
//     } 
//     char str[20];
//     sprintf(str,"%d",j);
    
//     for(i=strlen(str)-1;i>=0;i--) printf("%c",str[i]);

    
//     // printf("%s",str);
// }

// Convert a binary number to hexadecimal ** 


// Convert a hexadecimal number to binary
// #include <string.h>
// void hexToBin(char str[]){

//     int i;
//     for(i=0;i<strlen(str);i++){
//         switch(str[i]){
//             case 'A': printf("1010"); break;
//             case 'B': printf("1011"); break;
//             case 'C': printf("1100"); break;
//             case 'D': printf("1101"); break;
//             case 'E': printf("1111"); break;
//             case '0': printf("0000");break;
//             case '1': printf("0001"); break;
//             case '2': printf("0010"); break;
//             case '3': printf("0011"); break;
//             case '4': printf("0100"); break;
//             case '5': printf("0101"); break;
//             case '6': printf("0110"); break;
//             case '7': printf("0111"); break;
//             case '8': printf("1000"); break;
//             case '9': printf("1001"); break;
//             default: printf("Invalid Entry");
//         }
//     }


// }

// int main(){
//     char hex[11];
//     scanf("%s",hex);

//     hexToBin(hex);
// }


// Find the binary representation of a number and count the number of 1s (Hamming Weight)
// int main(){

//     int n=245;
//     int r,j=0,c=0;
//     for(int i=n;i>0;i/=2){
        
//         r=i%2;
//         if(r==1){
//             c++;
//         }
//         j=j*10+r;
//     }
//     printf("Hamming %d",c);

//     return 0;
// }


// Miscellaneous:

// Check if a given year is a leap year
// int main(){
//     int year=2008;
//     if(year%400==0 || (year%4==0 && year!=100))
//     printf("Leap Year");
//     else 
//     printf("not");
//     return 0;
// }

// Find the reverse of a string using recursion

// int reverse(int n,int j){
//     if(n==0) return j;
//     // printf("%d ",n);
//     return reverse(n/10,(j *10 + n%10));
// }
// int main(){

//     int n;
//     scanf("%d",&n);
    
//     printf("%d",reverse(n,0));

// }

// Calculate the sum of the first N natural numbers using recursion
// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",sum(n));
//     return 0;
// }


int main(){
    unsigned int n = 0xFD11A1;
     char* str = (char *) &n;
     if(*str) printf("Little Endian");
     else printf("Biggy");
    printf("%d",*str);
}