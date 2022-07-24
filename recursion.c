#include<stdio.h>
int factorial(int x); // imp to be here or else will cause error= > funtion prototype
int main() {
    int a =5;
    
    printf("the value of factorial is %d",factorial(a));

    return 0;
}
int factorial (int x){
    if(x==1 || x==0){
        return 1;
    }else{
        return x * factorial(x-1);
    }
}