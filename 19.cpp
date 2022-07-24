#include<iostream>
using namespace std;
int add (int a ,int b){
    cout<<"using func with 2 arguments";
    return   a+b;
}
int add(int a,int b,int c){
    cout<<"using func with 3 args";
    return  a+b+c; 
}
int main(){
    cout<<"the sum of 3 and 5 is "<<add(3,5)<<endl;
      cout<<"the sum of 3 and 5 and 9 is "<<add(3,5,9)<<endl;
     return 0;
}