#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    // number(number &obj){
    //     cout<<"the copy constructor!!!!"<<endl;
    //     a=obj.a;
    // }
    void display(){
        cout<<"then number is"<<a<<endl;
    }
};
int main(){
    number x,y,z(69);
    z.display();
     x.display();
      y.display();
      number z1(x);
      z1.display();
     return 0;
}