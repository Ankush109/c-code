#include<stdio.h>
#include<conio.h>
int main(){
    int n,i;
    // 1 2 3 4 5 
    // 0 1 2 3 4 
    printf("enter no of elements");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
      
        printf("%d",arr[i]);
    }
}