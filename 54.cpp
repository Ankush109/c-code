#include<iostream>
using namespace std;


class a{
    int a;
    public:
    void setdata(int a){
     this->a=a;
    }
    void getdata(){
        cout<<"the value of a is "<<a;
    }
};
int main(){
    a a;
    a.setdata(4);
    a.getdata();
     return 0;
} 