#include <stdio.h>

int main() {
	// your code goes here
    int i,j;
    for(i=0;i<4;i++){
        for(int k=4;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=0;j<=i;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}

