// Basic:
// Check if an array is sorted in ascending order.
// Write a program to count the occurrences of a given element in an array.
// Implement a program to shift all zeros in an array to the end while maintaining the order of other elements.
// Intermediate:
// Rotate an array to the right by k positions.
// Find the second largest element in an array without sorting.
// Merge two sorted arrays into one sorted array.
// Find all pairs of integers in an array whose sum is equal to a given number.
// Find the subarray with the maximum sum (Kadane’s Algorithm).


// Write a program to find the maximum and minimum elements in an array.
// #include <stdio.h>
// int main(){
//     int i;
//     int arr[5]={1,3,4,65,-22};
//     int max=arr[0],min=arr[0];
//     for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     printf("Max is : %d\nMin is: %d",max,min);
// }
#include <stdio.h>

// Reverse the elements of an array.
// int main(){
//     int arr[5]={1,3,44,22,12};
//     int i;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int c=n-1;
//     for(i=0;i<n/2;i++){
//         int temp=arr[i];
//         arr[i]=arr[c];
//         arr[c]=temp;
//         c--;
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }


// int main(){
//     int a[10]={33,2,11,-5,876,56,4,21,9,100};

//     int i,j;printf("Unsorted: ");
//     for(i=0;i<10;i++){
//         printf("%d ",a[i]);
//     }
//     for(i=0;i<10;i++){
//         for(j=0;j<10;j++){
//             if(a[i]<a[j]){
//             int temp = a[i];
//             a[i]=a[j];
//             a[j]=temp;
//             }
//         }
//     }
//     printf("\nSorted: ");
//     for(i=0;i<10;i++){
//         printf("%d ",a[i]);
//     }
// }




// File Handling Problems
// Basic:
// Check if a file exists or not.
// Intermediate:

// Write a program to create a file and write "Hello, World!" into it.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// int main(){
//     FILE *fptr;
//     char *str;
//     str="Hello fsafsafasf World!";
//     int i,j;
//     fptr = fopen("NewFile1.txt","w");
//     if(fptr==NULL)exit(1);

//     for(i=0;i<strlen(str);i++){
//         fputc(str[i],fptr);
//     }
//     fclose(fptr);

// }



// Read content from a file and display it on the console.
// int main(){
//     FILE *fptr;
//     int i,j;
//     char str[100];
//     fptr = fopen("Newfile1.txt","r");
//     if (fptr==NULL){
//         printf("Not opening");
//         exit(1);
//     }
//     while(fgets(str,100,fptr)!=NULL){
//     printf("%s",str);

//     }
//     fclose(fptr);
// }

// Write a program to count the number of characters, words, and lines in a text file.

// int main(){
//     FILE *fptr;
//     fptr =fopen("Newfile1.txt","r");
//     int i,j;
//     if (fptr==NULL){
//         exit(1);
//     }
//     char str[100];
//     int characters, words=0,lines=0;
//     while(fgets(str,100,fptr)!=NULL){
//         printf("%s",str);
//         for(i=0;i<strlen(str);i++){
//             if(str[i]=='\n'){
//                 lines++;
//             }
//             else if(str[i]==' '){
//                 words++;
//             }
//             else if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122){
//                 characters++;
//             }
//         }
//     }
//     printf("Words #: %d, Characters #: %d, Lines #: %d",words,characters,lines);
//     fclose(fptr);
// }


// Write a program to append user input to an existing file.

// int main(){
//     FILE *fptr;
//     fptr = fopen("Newfile.txt","a");
//     if(fptr==NULL){
//         printf("Error opening file");
//         exit(1);
//     }

//     char str[100];
//     fgets(str,100,stdin);
//     printf("User Input: %s\n", str);
//     // str[strcspn(str,"\n")-1]='\0';
//     // str[strcspn(str, "\n")] = '\0';

//     fputs(str,fptr);
//     // for(int i=0;i<strlen(str);i++){
//     //     fputc(str[i],fptr);
//     // }
//     fclose(fptr);
// }



// int main(){
//     FILE *fptr1;
//     int i,j;
//     fptr1 = fopen("Newfile1.txt","r");
//     FILE *fptr2;
//     fptr2= fopen("Newfile.txt","w");

//     if(fptr1==NULL || fptr2==NULL){
//         exit(1);
//     }
//     char str[100];
//     while(fgets(str,100,fptr1)!=NULL){
//         fputs(str,fptr2);
//     }
//     fclose(fptr1);
//     fclose(fptr2);

// }

// Write a program to read and display specific lines of a file based on user input.
// int main(){
//     FILE *fptr;
//     fptr = fopen("Newfile.txt","r");
//     FILE *fptr1;
//     fptr1= fopen("Newfile1.txt", "w");

//     if(fptr==NULL) exit(1);
//     int i,c=0;
//     char str[100];
//     while(fgets(str,100,fptr)!=NULL){
//         // for (i=0;i<strlen(str);i++){
//         // }
//         c++;
//         if(c%2!=0){
//             printf("%s",str);
//             fputs(str, fptr1);
//         }

//     }   
//     printf("\nWritten to File Also !");

//     fclose(fptr);
// }

// Merge the contents of two files into a third file.
// int main(){

//     FILE *fptr1,*fptr2;
//     fptr1=fopen("Newfile.txt","r");
//     fptr2=fopen("Newfile1.txt","r");
//     FILE *fptr = fopen("AnotherFile.txt","w");
//     int i;
//     char str1[100];
//     char str2[100];
//     char marged[200];
//     int c=0;
//     while(fgets(str1,100,fptr1)!=NULL){
//         for(i=0;i<strlen(str1);i++){
//             fputc(str1[i],fptr);
//             marged[c]=str1[i];
//             c++;
//         }
//     } 
    
//     while(fgets(str2,100,fptr2)!=NULL){
//         for(i=0;i<strlen(str2);i++){
//             fputc(str2[i],fptr);
//             marged[c]=str2[i];
//             c++;
//         }
//     }
//     marged[c-1]='\0';
//     for(i=0;i<c;i++){
//         printf("%c", marged[i]);
//     }
//     fclose(fptr);
//     fclose(fptr1);
//     fclose(fptr2);
// }




// Encrypt the content of a file by shifting characters (e.g., Caesar Cipher) and save it to another file.

// int main(){
//     FILE *fptr = fopen("AnotherFile.txt","r");
//     FILE *fout = fopen("Ciphered.txt","w");

//     char str[100];
//     int i;
//     while(fgets(str,100,fptr)!=NULL){
//         for(int i=0;i<strlen(str);i++){
//             fputc(str[i]+1,fout);
//         }
//     }
//     fclose(fptr);
//     fclose(fout);
// }


// Count the frequency of each word in a text file.
// int main(){
//     FILE *fptr = fopen("Newfile.txt","r");
//     if(fptr==NULL){exit(1);}
//     int i,j,k=0,q=0,l=0,c=0;    
//     char str[200];
//     char word[20];
//     struct Words{
//         char w[20];
//     };
//     struct Words arr[20];
//     while(fgets(str,200,fptr)!=NULL){
//         for(i=0;i<strlen(str);i++){
//             l=0;
//             if(str[i]==' ' && strlen(str)-1>i){ 
//                 q=i+1;
//                 while(str[q]!=' '){
//                     word[k++]=str[q];
//                     q++;
//                     l=1;
//                 }
//                 if(l==1){
//                 strcpy(arr[c].w,word);
//                 c++;
//                 }
//                 k=0;
//             }
//         }
//     }
//     for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//         printf("%s ", arr[i].w);
//     }
//     printf("Done!");
//     fclose(fptr);
// }



// Dynamic Memory Allocation Problems
// Basic:
// Create a program to double the size of a dynamically allocated array.
// Write a program to free memory and avoid memory leaks.
// Intermediate:
// Implement a program to dynamically allocate memory for an array and find the maximum and minimum values.
// Create a dynamic linked list to store integers and perform insertion and deletion.
// Write a program to transpose a dynamically allocated 2D matrix.
// Implement a program to resize a dynamically allocated array and preserve existing elements.
// Write a program to manage student records dynamically using an array of structures.

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// Allocate memory for an array dynamically and initialize it with user input.
// int main(){
//     int *arr= (int *)malloc(5*sizeof(int));
//     scanf("%d",&arr[]);
//     scanf("%d",&arr[1]);
//     scanf("%d",&arr[3]);
//     scanf("%d",&arr[4]);
//     scanf("%d",&arr[2]);
//     scanf("%d",&arr[5]);
//     int i;
//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }



// }


// Allocate memory for an array dynamically and initialize it with user input.
// int main(){
//     int n,i;
//     int *arr;
//     scanf("%d",&n);
//     arr = (int *)malloc(sizeof(int)*n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         printf("%d", arr[i]);
//     }

// }


// Allocate memory for a 2D matrix and input elements.

// int main(){
//     int row,col;
//     int i,j;
//     int **arr;
//     printf("Enter Row and Col size \n");
//     scanf("%d %d",&row,&col);
//     arr = (int **)calloc(row,sizeof(int));

//     for(i=0;i<row;i++){
//         arr[i]=(int *)calloc(col,sizeof(int));
//     }

//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Enter inputs");
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             scanf("%d", &arr[i][j]);
//         }
//         printf("\nEnter number for row %d",i);
//     }
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }


// Struct and Array of Struct Problems
// Basic:
// Add details of a new employee to an existing array of structures.
// Intermediate:
// Write a program to merge two arrays of structures based on a common field (e.g., department).
// Implement a program to update the marks of a student identified by their roll number.
// Write a program to delete a specific record from an array of structures.


// Define a structure for a Student with fields like name, roll, and marks. Write a program to input and display data of one student.
// struct Student{
//     char name[20];
//     int marks;
//     int roll;

// };
// int main(){
//     struct Student s;
//     gets(s.name);
//     scanf("%d %d",&s.marks,&s.roll);

//     printf("%s %d %d", s.name,s.roll, s.marks);

// }


// Write a program to find the employee with the highest salary.

// struct Employee{
//     char str[20];
//     int salary;
// };
// int main(){
//     int i,j;printf("Enter the number of entries:\n");
//     int n; scanf("%d",&n);

//     struct Employee *li = (struct Employee*)malloc(sizeof(struct Employee)*n);
//     printf("Enter Name, salary:\n");
//     for(i=0;i<n;i++){
//         getchar();
//         fgets(li[i].str,20,stdin);
//         li[i].str[strcspn(li[i].str,"\n")] = '\0';
//         scanf("%d",&li[i].salary);
//     }
//     int max=li[0].salary;
//     for(i=0;i<n;i++){
//         if(li[i].salary>max){
//             max=li[i].salary;
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("Name: %s, Salary: %d\n",li[i].str,li[i].salary);
//     }
//     for(i=0;i<n;i++){
//         if(li[i].salary==max){
//             printf("Name: %s, Salary: %d\n", li[i].str,li[i].salary);
//         }
//     }

// }

// Sort an array of students based on their marks.
#include <stdio.h>
#include <string.h>

// struct Student {
//     char name[50];
//     int marks;
// };

// // Function Prototype
// void sortStudents(struct Student arr[], int size);

// int main() {
//     // Example array of students
//     struct Student students[] = {
//         {"Alice", 85},
//         {"Bob", 90},
//         {"Charlie", 78},
//         {"Diana", 92},
//         {"Eve", 88}
//     };

//     int n = sizeof(students) / sizeof(students[0]);

//     printf("Before Sorting:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
//     }

//     // Call the sorting function
//     sortStudents(students, n);

//     printf("\nAfter Sorting:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
//     }

//     return 0;
// }

// // Function Definition Goes Here
// void sortStudents(struct Student arr[], int size) {

//     int i;char str[20]; 
//     int max=0;
//     for(i=0;i<size;i++){
//         if(arr[i].marks>max){
//             max=arr[i].marks;
//             strcpy(str,arr[i].name);
//         }
//     }    
//     printf("\nMax Marks is of: \nName: %s, Marks: %d\n",str,max);
//     for(i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(arr[i].marks<arr[j].marks){
//                 struct Student temp = arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("----------\n");
//     printf("\nSorted Array!!!!:\n");
//     for(i=0;i<size;i++){
//         printf("Name: %s, Marks: %d\n", arr[i].name, arr[i].marks);
//     }
// }


// Find the average salary of all employees stored in a structure array.

// struct Employee{
//     char name[50];
//     int salary;
// };
// int main() {
//     // Example array of students
//     struct Employee employees[] = {
//         {"Alice", 85},
//         {"Bob", 90},
//         {"Charlie", 78},
//         {"Diana", 92},
//         {"Eve", 88}
//     };
//     int i,avg=0;
//     for(i=0;i<sizeof(employees)/sizeof(employees[0]);i++){
//         avg += employees[i].salary;
//     }
//     printf("Avegra Salary in thousand is : %d ",avg/5);

// }

// 2-D Array-Related Problems

// int main(){
//     int i,j,k,sum=0,row,col,max=0;
//     printf("Enter the number of rows and cols in DD DD format\n");
//     scanf("%d %d",&row,&col);
//     int **arr = (int **)malloc(sizeof(int*)*row);
//     for(i=0;i<row;i++){
//         arr[i] = (int *)malloc(sizeof(int) * col);
//     }

//     for(i=0;i<row;i++){
//         printf("Enter the elements of row %d\n", i+1);
//         for(j=0;j<col;j++) scanf("%d",&arr[i][j]);
//     }

//     for(i=0;i<row;i++){
//         sum=0;
//         for(j=0;j<col;j++){
//             sum += arr[i][j];
//         }
//         if(sum>max){
//             max=sum;
//             k=i+1;
//         }
//     }    
//     printf("\n%d is the row with maximum sum!!",k);
// }


// Transpose a 2D matrix.

// int main(){
//     int i,j,k,l;
//     int row,col;
//     printf("Enter the number of rows and cols like %% and %%\n");
//     scanf("%d %d", &row,&col);
//     int **arr =(int **)malloc(sizeof(int *)*row);

//     for(i=0;i<row;i++){
//         arr[i]=(int *)malloc(sizeof(int)*col);
//     }

//     // printf("Enter the Elemnts\n");
//     for(i=0;i<row;i++){
//         printf("Enter the elements of Row %d\n",i+1);
//         for(j=0;j<col;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     for(i=0;i<row;i++){
//         printf("\n");
//         for(j=0;j<col;j++){
//             printf("%d  ",arr[i][j]);
//         }
//     }
//     printf("\n");
//     int arr1[col][row];
//     int c=0,d=0;
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             arr1[j][i]=arr[i][j];
//         }
//         c++;
//     }
//     printf("Transposed Matrix:\n");
//     for(i=0;i<col;i++){
//         for(j=0;j<row;j++){
//             printf("%d ", arr1[i][j]);
//         }
//         printf("\n");
//     }
// }


// Check if a 2D matrix is symmetric.

// int main(){
//     int i,j,k=0,row,col;
//     printf("Enter the row and col\n");
//     scanf("%d %d",&row,&col);
//     if(row!=col){
//         printf("The Matrix should be square but the dimensions are not satisfying\n");
//         exit(1);
//     }
//     int **arr = (int**)malloc(sizeof(int *)*row);
//     for(i=0;i<row;i++){
//         arr[i]=(int *)malloc(sizeof(int)*col);
//     }
//     printf("Enter the elements:\n");
//     for(i=0;i<row;i++){
//     printf("Now of row %d\n",i+1);   
//         for(j=0;j<col;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("The matrix is:\n");
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             if(arr[i][j]==arr[j][i]){
//                 k++;
//             }
//         }
//     }
//     if(k>=row*col-1) printf("Symmetric");
//     else printf("Not Symmetric");


// }

// Implement the boundary traversal of a 2D matrix.
// int main(){
//     int i,j,k=0,row,col;
//     printf("Enter the row and col\n");
//     scanf("%d %d",&row,&col);
//     if(row!=col){
//         printf("The Matrix should be square but the dimensions are not satisfying\n");
//         exit(1);
//     }
//     int **arr = (int**)malloc(sizeof(int *)*row);
//     for(i=0;i<row;i++){
//         arr[i]=(int *)malloc(sizeof(int)*col);
//     }
//     printf("Enter the elements:\n");
//     for(i=0;i<row;i++){
//     printf("Now of row %d\n",i+1);   
//         for(j=0;j<col;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("The matrix is:\n");
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     int sum=0;
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             if(i==0||j==0||i==row-1||j==col-1){
//                 sum += arr[i][j];
//             }
//         }
//         printf("\n");
//     }
//     printf("Sum is %d",sum);

// }

// Rotate a 2D matrix by 90 degrees clockwise.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// int main(){
//     int row,col,i,j,n;
//     printf("Enter Row and COl size\n");
//     scanf("%d %d",&row,&col);
//     int **arr=(int **)calloc(row,sizeof(int *));

//     for(i=0;i<row;i++)
//         arr[i]=(int*)calloc(col,sizeof(int *));
    
//     for(i=0;i<row;i++){
//         printf("Enter the elements of %d row\n", i+1);
//         for(j=0;j<col;j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("Actual Matrix: \n");
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int arr1[row][col];
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             arr1[i][j]=arr[row-1-j][i];
//         }
//         // printf("\n");
//     }
//     printf("After transformation\n");
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             printf("%d ",arr1[i][j]);
//         }
//         printf("\n");
//     }

// }

// Basic Questions:
// Write and Read from a File


// Write a program to write a string to a file character by character using fputc and then read it back character by character to display it on the screen.
// Copying Content
// int main(){
//     FILE *fptr =fopen("notes.txt","w");
//     char str[]="Hello how are you doing sir!?";

//     int i,l=strlen(str);
//     for(i=0;i<l;i++){
//         fputc(str[i],fptr);
//     }
//     fclose(fptr);
//     fptr = fopen("notes.txt", "r");
//     while(fgets(str,100,fptr)!=NULL){
//         printf("%s",str);
//     }
// }

// Write a program to copy the content of one text file to another file using fgets and fputc.
// Line-by-Line Input




// Create a program that reads a multi-line text from the user, writes it to a file using fputs, and then reads it back line by line using fgets.
// Intermediate Questions:
// Student Record Manager


// Write a program to count the number of words and characters in a text file. Use fgets to read the content.
// Appending Content
// int main(){
//     FILE *fptr;
//     fptr = fopen("notes.txt","r");
//     if(fptr==NULL) exit(1);
//     int i,j=1;
//     char str[100]; int flag=0,word_count=0,ch=0;
//     while(fgets(str,100,fptr)!=NULL){
//         str[strcspn(str,"\n")-1]='\0';
//         word_count=0;
//         printf("%s\n",str);
//         for(i=0;i<strlen(str);i++){
//             if(str[i]==' '){
//                 flag = 0;
//             }
//             else if(!flag){
//                 flag = 1;
//                 word_count++;
//             }
//             if(str[i]!=' ') ch++;
//         }
//         // printf("%d %d %d\n", j,word_count,ch);
//         printf("LINE %d. '%s'  -- Contains %d words and %d characters",j,str, word_count, ch);

//         ch=0;
//         j++;
//     }
//     fclose(fptr);
// }


// Write a program that appends a user's input to an existing file using fputs or fprintf.
// Reverse File Content
// int main(){
//     FILE *fptr;
//     FILE *fout = fopen("ReversedFile.txt", "w");
//     fptr = fopen("Newfile.txt","a+");
//     if(fptr==NULL) exit(1);
//     char str[100];
//     while(fgets(str,100,fptr)!=NULL){
//         // printf("%s",str);
//         for(int i=strlen(str)-1;i>=0;i--){
//             fputc(str[i],fout);
//         }
//     }
//     fgets(str,100,fptr);
//     printf("%s", str);
// }


// Write a program to search for a specific word in a file. Use fgets to read line by line and check if the word exists in the line.
// Word Frequency

// int main(){
//     FILE *fptr;
//     fptr = fopen("notes.txt","r");
//     int i;
//     char check[15];
//     printf("Enter word\n");
//     fgets(check,15,stdin);
//     int k=0;
//     char str[100];int c=0;
//     while(fgets(str,100,fptr)!=NULL){
//         for(i=0;i<strlen(str)-strlen(check);i++){
//             c=0;
//             for(int j=0;j<strlen(check);j++) {
//                 printf("str[i+j]= %c check[j]=%c \n", str[i+j+1], check[j]);
//                 if(str[i+j]!=check[j]){
//                     break;
//                 }
//                 c++;
//             }
            
//             if(c>=strlen(check)-1){
//                 k++;
//                 // printf("\nHere");
//             }
            
//         }
    
//     printf("%d", k);
// }
//     fclose(fptr);
// }

// Write a program to calculate the frequency of each word in a file. Use fgets to read and a map or array to store word counts.
// Challenges with Mixed Functions:
// Student Grade Classification

// Create a file students.txt with student names and their marks (use fprintf).
// Write a program to read the file using fscanf and classify students into grades (e.g., A, B, C) based on their marks.
// Merge Files

// Write a program to merge the content of two files into a third file. Use fgets to read and fprintf to write.
// Encrypt File Content

// Write a program to encrypt a text file using a Caesar Cipher (shift each character). Use fgets to read and fputc to write.
// File Line Numbers

// Write a program that reads a file line by line using fgets and writes the content to another file, prefixing each line with its line number (e.g., 1. Line content).
// Duplicate Lines Removal

// Write a program to remove duplicate lines from a file. Use fgets to read and write unique lines to a new file.
