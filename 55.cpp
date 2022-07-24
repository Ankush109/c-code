#include<iostream>
using namespace std;
class base{
    public:
    int varbase;
    void display(){
        cout<<"displaying base class var base"<<varbase;
    }

};
class derived :public base{
    int varderived;
    void display(){
        cout<<"displaying base class variable "<<varbase<<endl;
        cout<<"displaying derived class var derived"<<varderived;
    }

};
int main(){
    base *bp;
    base objbase;
    derived objderived;
    bp=&objderived; //pointing baseclass pointer to derived class 
    bp->varbase=24;
     return 0;
}