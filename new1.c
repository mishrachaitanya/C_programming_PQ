// #include <stdio.h>
// int gcd(int a, int b){
//     if(a==0) return b;
//     if(b==0)return a;

//     if(a>b){
//         return gcd(a%b, b);
//     }
//     else{
//         return gcd(a,b%a);
//     }

// }
// int main(){
//     int a=100,b=80;
//     int k =gcd(a,b);
//     printf("%d",k);
    // int d=2131;
    // if ((d%100!=0 && d%4==0) || d%400==0)
    //     printf("Leap");
    // else
    //     printf("NO");
    // return 0;
// }





// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(){

// int n=1827000;
// char str[20];
// sprintf(str,"%d",n);
// for(int i=0;i<strlen(str);i++){
//     if(str[i]=='0'){
//         str[i]='1';
//     }

// }

// int kk = atoi(str);
// printf("%d",kk);


// }
// #include <stdio.h>
// #include <stdio.h>
// #include <stdio.h>

// int main() {
//     int y;
//     scanf("%d",&y);
//     int rev=0;
//     int place =1;
//     while(y!=0)
//     {
//         int rem;
//         rem=y%10;
//         if(rem==0)
//         {
//             rem = 1;
//         }
//         rev=rem*place+rev;
//         place*=10;
//         y/=10;
//     }
//     printf("%d",rev);
// // }
// #include <stdio.h>
// int main() {
//     int y;
//     scanf("%d",&y);
//     int num=0;
//     int n=987;
//     int j=0,place=1;
//     while(n>0){

//         int r = n%10;
//         j=r*place+j;
//         place*=10;
//         n/=10;
//     }
//     printf("%d ",j);
// }
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main() {
//     unsigned int num;
//     // Read hexadecimal input from the user
//     // printf("Enter a hexadecimal number: ");
//     scanf("%x", &num);

//     int i;
//     char str[9];
//     sprintf(str,"%8X",num);
//     for (i=0;i<strlen(str)-1;i+=2){
//         printf("%c %c",str[i],str[i+1]);

//     }

#include <stdio.h>
int main(){
    unsigned int a;
    scanf("%d", a);
    int i,power=0,r=0,j=0;
    char str[20];
    sprintf(str,"%8X",a);
    for(i=strlen-1; i<=0;i++){
        int k = int(str[i]*power);
        j = j+ (power*k);
        power = power+16;
    }


    // // Extract each byte from the integer (big-endian order)
    // unsigned char byte1 = (num >> 24) & 0xFF; // Most significant byte
    // unsigned char byte2 = (num >> 16) & 0xFF;
    // unsigned char byte3 = (num >> 8) & 0xFF;
    // unsigned char byte4 = num & 0xFF;         // Least significant byte

    // // Print each byte in hexadecimal format
    // printf("%02X\n", byte1);
    // printf("%02X\n", byte2);
    // printf("%02X\n", byte3);
    // printf("%02X\n", byte4);

//     return 0;
// }
