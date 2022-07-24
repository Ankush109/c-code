#include<stdio.h>
int main(){
 int marks[100];
//  for(int i=0;i<=3;i++){
//      printf("%d ",marks[i]);
//  }
int n;
    printf("enter the number of elements you want");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d ",&marks[i]);
    }

   for(int i=0;i<=n;i++){
        printf("%d ",marks[i]);
    }
}