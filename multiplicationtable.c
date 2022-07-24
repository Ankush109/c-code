#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter the number you want the table of");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        arr[i]=n*(i+1);
        printf("%d x %d = %d \n",n,i,arr[i]);
    }
}