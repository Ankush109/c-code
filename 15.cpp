#include<iostream>
using namespace std;
//function prototype:
int sum(int a,int b); //assures the compiler to find the function later in the programm
void g(){
    cout<<"hello mfs";
}
int main(){
    int num1, num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    int v=sum(num1,num2);
    //num1 and num2 are the actual parameters
    cout<<"the sum is "<<v<<endl;
    g();
     return 0;
}
int sum (int a, int b){
    // a and b are formal parameters takes the value from actual parameterss
    int c =a+b;
    return c;

}