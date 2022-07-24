#include<iostream>
using namespace std;
int product(int a ,int b){
    static int c =0; //this executes only once
    c=c+1;  //next time this function runs the value of c will be retained
    return a*b+c;

}
int main(){

    int a,b; 
    cout<<"enter the value of a and b ";
    cin>>a>>b;
    cout<<"the product of a and b  is "<<product(a,b);
     return 0;
}