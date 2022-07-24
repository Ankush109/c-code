#include<stdio.h>
int main(){
    int n,k,i,j;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        //print the spacess
        for(k=1;k<=n-i;k++){
            printf(" ");

        }
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}