#include<iostream>
using namespace std;
// base class
    class employee{
     
        
        public:
           int id;
             float salary;
        employee(){}
        employee(int inpid){
            id=inpid;
       
            salary=34.0;
        }

    };
//derived class
// class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
//creating a programmer class dervied class
    class programmer :public employee{  // default visibility mode is private

        public: 
        programmer(int inpid){
            id=inpid;
        }
        int languagecode =9;
        void getdata(){
            cout<<id;
        }
    };





int main(){
    employee ankush(1),souvik(2);
    cout<<ankush.salary<<endl;
    cout<<souvik.salary<<endl;
    programmer ud(10);
    cout<<ud.languagecode<<endl;
    cout<<ud.id<<endl;
    ud.getdata();
     return 0;
}