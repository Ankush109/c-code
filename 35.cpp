#include<iostream>
using namespace std;
    int count=0;
    //Destructor never takes an argument nor does it return any value
    class num{

        public:

        num(){ // constructor 
            count++;
            cout<<"this is the time when constructor is called for object number"<<count<<endl;
        }
        //desctructor
        ~num(){ 
            cout<<"this is the time when distructor is called"<<count<<endl;
            count--;
        }
    };
int main(){
    cout<<"we are inside the main function"<<endl;
    cout<<"creating 1st object n1"<<endl;
    num n1;
    {     cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting thi s block"<<endl;
    }
    cout<<"back to main"<<endl;

     return 0;
}