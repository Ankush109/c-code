#include<stdio.h>
int sum(int n);
int main(){
    int n ;
    printf("enter a number");
    scanf("%d",&n);
    printf("the sum is %d",sum(n));
    return 0;
}
int sum(int n){
    int result;
    while(n!=0){
    result=sum(n-1)+n;
    return result;
    }
}