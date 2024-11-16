// General Logical Programs:


// Find the largest and smallest digits in a number

// #include <stdio.h>
// int main(){
//     int i,n=234312905;int r=0,min=n*n,max=0;
//     while(n>0){
//         r=n%10;
//         if(r>max) max=r;
//         if(r<min) min=r;

//         n/=10;
//     }
//     printf("Max is %d and Min is %d", max,min);
//     return 0;
// }


// // Find the sum of an arithmetic series
// #include <math.h>
// int main(){
//     int n=98;
//     int i,sum=0;
//     for(int j=1;j<=n;j++){
       
//     for(i=1;i<=j;i++){
//         sum+=j;}}
//         printf("%d",sum);
// }

// Check whether a number is an Armstrong number
// int main(){
//     int i,n=153,r=0,s=0;
//     for(i=n;i>0;i=i/10){
//         r=i%10;
//         s = s+ (r*r*r);
//     }
//     if(s==n) printf("YES"); 
//     else printf("NO");
//     return 0;
// }

// Generate all prime factors of a number
// int main(){
//     int i,n=5232,c=0;
//     for(i=1;i<=n;i++){
//         c=0;
//         for(int j=1;j<=i;j++){
//             if(i%j==0) c++;
//         }
//         if(c==2 && n%i==0) printf("%d ",i);
//     }
//     return 0;
// }


// Check if a number is a perfect number
// int main(){
//     int n=6,i,s=0,j=0;
//     while(j<1000){
//         s=0;
//         for(i=1;i<j;i++){
//             if(j%i==0) s+=i;
//         }
//         if(s==j) printf("%d ",j);
//         j++;
        
//     }
//     return 0;
// }

// Print a right-angled triangle of stars (*)
// int main(){
//     int i,j;
//     for(i=0;i<10;i++){
//         for (int k=10;k>i;k--) printf(" ");
//         for(j=0;j<=i;j++){
//             if(j==i) printf("*");
//             else printf("* ");
//         }
//         printf("\n");
//     }
// }




// Write a function to compute the square root of a number without using the sqrt function

#include <stdio.h>
// #include <math.h>
// int main(){
//     int n=16;
//     int i;
//     for(i=0;i<=n;i++){
//         if(i*i == n) printf("%d", i);
//     }
//     return 0;
// }

// Write a function to find the sum of digits of a number

// int sumdigit(int n) {
//     int sum=0, i;
//     while (n>0){
//         int r=n%10;
//         sum+=r;
//         n/=10;
//     }    return sum;
// }
// int main(){
//     printf("%d",sumdigit(243));
//     return 0;
// }

// Generate Pascal's Triangle for a given number of rows
