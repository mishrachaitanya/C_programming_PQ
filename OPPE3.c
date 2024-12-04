

// Reverse a String
// Write a program to reverse a string without using built-in string manipulation functions.
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char c[] = "Reversible";
//     int i,a;
//     char k[100];
//     for(i=strlen(c)-1;i>=0;i--){
//         k[a]=c[i];
//         a++;
//     }
//     printf("%s",k);
// }




// Palindrome String
// Check whether a given string is a palindrome (reads the same forward and backward).
#include <stdio.h>
#include <string.h>
// int main(){
//     char str[100];
//     scanf("%s",str);
//     int i,c=0;
//     char j[100];
//     for(i=strlen(str)-1;i>=0;i--){
//         j[c]=str[i];
//         c++;
//     }
//     int d=0;
//     for(i=0;i<strlen(str);i++){
//         if(j[i]==str[i])
//         d++;
//     }
//     printf("%s\n",j);
//     if(d>=strlen(str)-1)
//     printf("Palindrome");
//     else printf("Not a palindrome");

// }



// Count Vowels and Consonants
// Count the number of vowels and consonants in a given string.


// int main(){
//     char c[100];int a=0,b=0;
//     scanf("%s",c);
//     int i,j;
//     for(i=0;i<strlen(c);i++){
//         if(c[i]>=65 && c[i]<=90){
//             c[i]=c[i]+32;
//         }
//     }
//     for(i=0;i<strlen(c);i++){
//         if(c[i]=='a'|| c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u'){
//             a++;
//         }
//         else if(c[i]>=97 && c[i]<=122){
//             b++;
//         }
//     }
//     printf("Number of Vowels: %d\nNumber of Consonents %d",a,b);
//     printf("\n Original String is now changed to- %s",c);

// }


// String Length
// Implement your own version of strlen to find the length of a string.
// int main(){
//     char c[100]="This Is it. It's time now!";
//     int count=0;
//     int i=0;
//     printf("Given string is: ");
//     while(c[i]!='\0'){
//         printf("%c",c[i]);
//         i++;
//         count++;
//     }
//     printf("\n");
//     printf("\nLength of the string is: %d and the strlen() function says: %d",count,strlen(c));
// }



// Find Substring
// Write a function to check if one string is a substring of another.
// int main(){
//     char c[100]="This is the best world!";
//     char c1[10]="best";
//     int i,j;
//     for(i=0;i<strlen(c);i++){
//         if(c[i]>=65 && c[i]<=90){
//             c[i] += 32;
//         }
//     }
//     for(i=0;i<strlen(c1);i++){
//         if(c1[i]>=65 && c1[i]<=90){
//             c1[i] += 32;
//         }
//     }
//     printf("The two strings are: \n'%s'\nAND\n'%s'\n\n",c,c1);
//     int count=0;
//     for(i=0;i<strlen(c);i++){
//         count=0;
//         if(c[i]==c1[0]){
//             for(j=0;j<strlen(c1);j++){
//                 if(c[j+i]==c1[j] && (j+i)<strlen(c)){
//                     count++;
//                 }
//                 else break;
//             }
//         }
//         if(count==strlen(c1)){
//         printf("\nThe string '%s' is present in the string!",c1);
//         break;
//     }
//     }
    
//     if(count==0) printf("Not Present! Sorry ");
// }

// int main(){
//     char c[100]="This is the best world!";
//     char c1[10]="best1";
//     int i,j;
//     for(i=0;i<strlen(c);i++){
//         if(c[i]>=65 && c[i]<=90){
//             c[i] += 32;
//         }
//     }
//     for(i=0;i<strlen(c1);i++){
//         if(c1[i]>=65 && c1[i]<=90){
//             c1[i] += 32;
//         }
//     }
//     int found=0;
//     for(i=0;i<strlen(c)-strlen(c1);i++){
//         found=1;
//         for(j=0;j<strlen(c1);j++){
//             if(c[i+j]!=c1[j]) {
//                 found=0;
//                 break;
//                 }
//         }

//         if(found){
//             printf("present");
//             return 0;
//         }
//     }
//     printf("String not preesnt");}




// Count Words
// Count the number of words in a given string.
#include <ctype.h>
int main(){
    char str[100]="This is the string that i need to check the question with";
    int i,c=0,g=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]==' ' || str[i] ==',' || str[i]=='!' || str[i]=='?'){
            c++;
        }
        if(isalpha(str[i]) || isdigit(str[i])){
            g++;
            break;
        }
    }
    printf("The number of words in the sentence are = %d : : : : %d",c,g );
}