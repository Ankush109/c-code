#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("emter a numbr upto which fibonaaci series is to be calculated");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){

    
    printf(" %d" ,fib(i));
    }

}
int fib(int n){
      if(n==1 ){
          return 1;
      }else if (n==0)
      {
         return 0;

    }else{
        return fib(n-1)+fib(n-2);
    }
      
}