#include<stdio.h>
 
float average (int a ,int b, int c);
int main(){
  int a ,b,c;
    printf("the average value of the given number is %f" ,   average(2,3,5));
    return 0;
}
float average(int a ,int b,int c){
    float result ;
    result =(float)(a+b+c)/3;
    return result;
}