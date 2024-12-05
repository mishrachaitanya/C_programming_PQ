// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(){
//     FILE *fptr;

//     char str[100]="Hello Students!!!!!\nHow are you all?";

//     fptr = fopen("abc1.txt","w");
//     if(fptr == NULL){
//         printf("File cannot be open");
//         exit(1);
//     }
//     for(int i=0;i<strlen(str);i++){
//         fputc(str[i],fptr);
//     }
//     fclose(fptr);
//     // getch();
//     // printf("Successful %X",fptr);
// }



//User input:
// #include <stdlib.h>
// #include<stdio.h>
// #include <string.h>
// int main(){
//     FILE *fptr;
//     char str[100];
//     printf("Enter a string");

//     scanf("%s",str);

//     fptr = fopen("Newfile.txt", "w");
//     if(fptr==NULL)
//     {
//         printf("File cannot be opened");
//         exit(1);
//     }

//     for(int i=0;i<strlen(str);i++){
//         fputc(str[i],fptr);
//     }
//     fclose(fptr);
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(){
//     char str[100]="This is the string which i want to enter into the file!!";

//     FILE *fptr;
//     fptr = fopen("Newfile1.txt","w");
//     if(fptr==NULL){
//         printf("File cannot be opened");
//         exit(1);
//     }
//     for(int i=0;i<strlen(str);i++){
//         fputc(str[i],fptr);
//     }
//     fclose(fptr);
// }



//Taking intput from user then storing in file
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(){
//     FILE *fptr;
//     char str[100];

//     fptr = fopen("Newfile.txt","w");
//     printf("Enter the string\n");
//     gets(str);
//     int i;
//     for(i=0;i<strlen(str);i++){
//         fputc(str[i],fptr);
//     }
//     fclose(fptr);

// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(){
    
//     FILE *fptr;
//     char ch;

//     fptr = fopen("filename.txt","r");
//     if(fptr==NULL){
//         printf("File does not exist ");
//         exit(1);
//     }

//     ch = fgetc(fptr);
//     while(!feof(fptr)){
//         printf("%c",ch);
//         ch=fgetc(fptr);
//     }
//     fclose(fptr);
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(){
//     FILE *fptr;
//     char ch;
//     int i;
//     fptr = fopen("Filename.txt","r");
//     if (fptr==NULL){
//         printf("File cannot beopened");
//         exit(1);

//     }

//     ch = fgetc(fptr);
//     while(!feof(fptr)){
//         printf("%c",ch);
//         ch = fgetc(fptr);
//     }
//     fclose(fptr);

// }


//Fgets

// int main(){
//     char str[100];
//     FILE *fptr;

//     fptr = fopen("filename.txt","r");
//     if(fptr==NULL){
//         printf("File not found");
//         exit(1);
//     }

//     fgets(str,5,fptr);
//     while(!feof(fptr)){
//         printf("%s", str);
//         fgets(str,5,fptr);
//     }
// }



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(){
//     FILE *fptr;
//     char str[100]="Hi thererererer";
//     // scanf("Enter a string");

//     fptr = fopen("filename.txt","w");
//     if(fptr==NULL){
//         printf("Not present");
//         exit(1);
//     }
//     fputs(str,fptr);
//     fclose(fptr);
// }

// int main(){
//     FILE *fptr;
//     char str[100];

//     printf("Enter yourname:\n");
//     gets(str);
//     fptr = fopen("filename.txt","a");
//     if(fptr==NULL){
//         printf("Something wonr");
//         exit(1);
//     }
//     fputs(str,fptr);
//     fclose(fptr);
//     printf("Written to File! Let's read it!\n \n");

//     fptr = fopen("filename.txt","r");
//     while(!feof(fptr)){
//         printf("%c", fgetc(fptr));
//     }
//     fclose(fptr);
// }




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// struct book{
//     int bookid;
//     char title[20];
//     float price;
// };
// void main(){
//     FILE *fptr;
//     struct book p1;
//     fptr = fopen("filename1.dat","w");
//     if(fptr==NULL){
//         printf("Something went wrong");
//         exit(1);
//     }
//     printf("Enter book itd, title, and price \n");
//     scanf("%d", &p1.bookid);
//     fflush(stdin);
//     gets(p1.title);
//     scanf("%f", &p1.price);

//     fwrite(&p1, sizeof(p1), 1, fptr);
    
    
//     fclose(fptr);

// }



// struct book{
//     int bookid;
//     char title[20];
//     float price;
// };
// int main(){
//     FILE *fptr;
//     fptr = fopen("filename1.dat", "r");
//     struct book b1;
//     if (fptr==NULL){
//         printf("File not read!");
//         exit(1);
//     }
//     fread(&b1,sizeof(b1),1,fptr);
//     printf("%d %s %.2f", b1.bookid, b1.title, b1.price);
//     fclose(fptr);
// }


struct student{
    int id;
    char name[20];
    float percentage;
};

// int main(){
//     FILE *fptr;
//     fptr = fopen("BinFile.bin","a+");

//     struct student s1;
//     if(fptr==NULL){
//         printf("File not available");
//         exit(1);
//     }
//     printf("Enter ID, Name and Percentage\n");
//     scanf("%d", &s1.id);
//     fflush(stdin);
//     gets(s1.name);
//     scanf("%f", &s1.percentage);
//     fwrite(&s1, sizeof(s1), 1, fptr);
//     printf("Written to the file");
//     fclose(fptr);

// }

// struct student{
//     int id;
//     char name[20];
//     float percentage;

// // };
int main(){
    FILE *fptr;
    fptr = fopen("BinFile.bin","r");
    if(fptr==NULL){
        printf("Something wrong reading the file");
        exit(1);
    }
    struct student s1;
    while(fread(&s1,sizeof(s1),1,fptr)>0)
    {
        printf("%d %s %.2f\n", s1.id, s1.name, s1.percentage);}
    fclose(fptr);
}


