// #include <stdio.h>
// int main(){

// int a[] = { 1,2,3,4,5,6,7,9};
//     int i,max=0;
//     for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
//         if (a[i]>max)
//         max=a[i];
//     }
//     printf("%d", max);

// }

// int min(int *a){

//     int i,min=a[0];
//     for(i=0;i<8;i++){
//         if(a[i]<min)
//         min =a[i];
//     }
//     return min;
// }

// #include <stdio.h>
// int main(){

// int a[] = { 1,2,3,4,5,6,7,-10,9};
//     int i,max=0;
//     printf("%d",min(a));
//     // for(i=0;i<8;i++){
//     //     if (a[i]>max)
//     //     max=a[i];
//     // }
//     // printf("%d", max);

// }
#include <stdio.h>

// void reverse(int a[],int size){
//     int i,temp,c=size-1;
//     for(i=0;i<size/2;i++){
//         temp=a[i];
//         a[i]=a[c];
//         a[c]=temp;
//         c--;
//     }
//     for(i=0;i<size;i++){
//         printf("%d ",a[i]);
//     }
// }

#include <stdio.h>
// int main(){
//     int n=0;
//     scanf("%d",&n);
//     int a[n];
//     int i;
//     printf("Enter Elements\n");
//     for(i=0;i<n;i++){
//         scanf("%d", &a[i]);
//     }

//     reverse(a,n);

// }

// void secLargest(int a[],int size){
//     int i,temp,c=size-1;
//     int k[size],max=0;
//     for(i=0;i<size;i++){
//         k[i]=a[i];
//     }
//     printf("HEre");
//     int secondMax=0;
//         for(i=0;i<size;i++){
//             if(k[i]>max)
//             max=k[i];
//             if(k[i]>secondMax && k[i]!=max)
//             secondMax=k[i];
//         }
   
//         printf("Second largest is %d ",secondMax);
// }
// int main(){
//     int n=0;
//     scanf("%d",&n);
//     int a[n];
//     int i;
//     printf("Enter Elements\n");
//     for(i=0;i<n;i++){
//         scanf("%d", &a[i]);
//     }

//     secLargest(a,n);

// }



#include <stdio.h>

// // Function prototypes
// int count_prime(int *arr, int size){
//     int count=0,c=0;
//     int i;
//     for(i=0;i<size;i++){
//         c=0;
//         for(int j=1;j<=arr[i];j++){
//             if(arr[i]%j==0){
//                 c++;
//             }
//         }
//         if(c==2){
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     int arr[] = {2,4,5,6,7,8,9,10}; // Example array
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

//     // Count evens and odds
//     int even_count = count_prime(arr, size);
//     // int odd_count = count_odd(arr, size);

//     // Display results
//     printf("Number of prime elements: %d\n", even_count);
//     // printf("Number of odd elements: %d\n", odd_count);

//     return 0;
// }

// void rotate(int *a, int size, int n){
//     int i,temp[size];
//     n=size%n;
//     for(i=1;i<size;i++)
//     {   
//         temp[i]=a[i-1];
//     }
//     temp[0]=a[size-1];

//     for(i=0;i<size;i++){
//         a[i]=temp[i];
//         printf("%d ",a[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {2,4,5,6,7,8,9,10}; // Example array
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

//     int n=0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     rotate(arr,size,n);

// }

// int findSum(int *a,int size, int sum){
//     int i,c=0,j;
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             if(a[i]+a[j]==sum){
//                 printf("Pair %d: %d + %d\n",sum,a[i],a[j]);
//                 c++;
//             }
//         }
//     }
//     if(c==0)
//     printf("NO Sum possible");
// }
// int main(){
//     int arr[] = {2,4,5,6,7,8,9,10,1,45,6,3,278,23,33}; // Example array
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

//     int n=0;
//     scanf("%d",&n);

//     findSum(arr,size,n);

// }

#include <stdio.h>

// Function prototypes
// int kth_smallest(int *arr, int size, int k);
// int kth_largest(int *arr, int size, int k);
void kth_smallest(int *arr, int size, int k) {

    int i,j,temp[size],max=0;
    for(i=0;i<size;i++){
        temp[i]=arr[i];
    } 
    for(j=0;j<k;j++){
        for(i=0;i<size;i++){
            if(temp[i]>max){
                max=temp[i];
            }
        }
        for(i=0;i<size;i++){
            if(temp[i]==max && i!=size-1)
            temp[i]=temp[i-1];
            else if(temp[i]==max)
            temp[i]=temp[i+1];
        }
        max=temp[0];
    }
    //Printing
    int m=temp[0];
    for(i=0; i<size;i++){
        if(temp[i]>m){
            m=temp[i];
        }
    }
    printf("%dth largest number is: %d",k,m);


}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10 /* Your input array here */ };
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int k;

    // Input the value of k
    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Call the function to find the kth smallest element
    // int smallest = kth_smallest(arr, size, k);
    // printf("The %dth smallest element is: %d\n", k, smallest);

    // Call the function to find the kth largest element
    kth_smallest(arr, size, k);
    // printf("The %dth largest element is: %d\n", k, largest);

    return 0;
}

// Function to find the kth smallest element


// Function to find the kth largest element
// int kth_largest(int *arr, int size, int k) {
//     // Your logic here
// }
