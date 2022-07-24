#include<iostream>
using namespace std;
class employee 
{
    private:
    int a,b,c; // cannot be accessed outside this class

    public: // ccan be used and accessed from anywhere 
    int d,e;
    void setdata(int a1,int b1, int c1); //declaration
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
          cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
               cout<<"the value of c is "<<d<<endl;
                  cout<<"the value of c is "<<e<<endl;
                  
    }
};



void employee :: setdata (int a1, int b1 ,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee harry; // object decalration 
    harry.d=12;
    harry.e=16;
    harry.setdata(1,2,3);
    harry.getdata();
     return 0;
}