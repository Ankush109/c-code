#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator{
     int a,b;
public  :
void getdatasimple(){
 
    cout<<"enter the val of a";
    cin>>a;
     cout<<"enter the val of b";
    cin>>b;
}
void performoperationssimple(){
    cout<<"the val of a+b"<<a+b<<endl;
    cout<<"the val of a-b"<<a+b<<endl;
        cout<<"the val of a*b"<<a*b<<endl;
            cout<<"the val of a/b"<<a/b<<endl;
    
}


};
class scfcalculator{

     int a,b;
public  :
void getdatascf(){
 
    cout<<"enter the val of a";
    cin>>a;
     cout<<"enter the val of b";
    cin>>b;
}
void performoperationssc(){
    cout<<"the val of cosa"<<cos(a)<<endl;
    cout<<"the val of sina"<<sin(a)<<endl;
        cout<<"the val of exp(a)"<<exp(a)<<endl;
            cout<<"the val of tan(a)"<<tan(a)<<endl;
    
}


};
// multiple 
class hybridcalculator :public simplecalculator,public scfcalculator{
        




};
int main(){
    // simplecalculator calc;
    // calc.getdata();
    // calc.performoperations();
    // scfcalculator cal;
    // cal.getdata();
    // cal.performoperations();
     return 0;
}