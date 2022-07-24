#include<iostream>
using namespace std;
class complex {
    int a;
    int b;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }  
    void setdatabusum(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void printnumnber(){
        cout<<"your complex number is "<<a<<"+i"<<b<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2); 
    c1.printnumnber();
    c2.setdata(3,4);
     c2.printnumnber();
    c3.setdatabusum(c1,c2);
     c3.printnumnber();
     return 0;
}