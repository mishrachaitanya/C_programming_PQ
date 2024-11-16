#include <stdio.h>

int main(){
    int first = 0;
    int second =1;
    int n, next ;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    int i;
    for(i=0;i<n;i++){
        if (i==0){
            printf("%d ",first);
        }
        else if ( i==1){
            printf("%d ", second);
        }
        else{
            next =first+ second;
            printf("%d ", next);
            first=second;
            second=next;
    }}
    printf("\n");
    return 0;
    
}