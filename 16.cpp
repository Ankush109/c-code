#include<iostream>
using namespace std;
// using call by refernce:-=> this will work:-
void swap_pointer(int*a,int*b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
//this will not swap the values of a and b:- =>this will not work:-
void swap(int a ,int b){
    int temp =a ;
    a=b;
    b=temp;
}
//uisng refernce variable:-
void swaprefernce(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
}
int main(){
    int x=4,y=5;
    cout<<"the value of x is "<<x<<"and the value of y is "<<y<<endl;
    swaprefernce(x,y);
    cout<<"the value of x is "<<x<<"the value of y is"<<y<<endl;
     return 0;
}