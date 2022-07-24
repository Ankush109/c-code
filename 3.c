#include<stdio.h>
int sum (int a,int b);
int main(){
    int c;
    c=sum(2,5);  //function call
    printf("the value of the c is %d",c);
    return 0;

}
int sum(int a ,int b){ // are parameters
    int result;
    result =a+b;
    return result;
}