#include<iostream>
using namespace std;
int fib(int n){ // fibonnaci series of n th term
    if(n<2){
        return 1;
    
    }
    return fib(n-2)+fib(n-1);

}
int factorial(int n){
    if(n<=1){
        return 1;
    }
return n* factorial(n-1);
}
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    cout<<"the term in fibonnaci series"<<a<<"is"<<fib(a);
    // cout<<"the factorial of " << a << " is "<<factorial(a);
    //  return 0;
} 