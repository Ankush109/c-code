#include<iostream>
using namespace std;

class complex {
    int a,b;
    // creating a constructor
    public:
    complex(int,int);  //constructor declaration
  void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i"<<endl;
    }



};
complex :: complex(int x,int y){ //-> is a  parameterized constructor
    a=x;
    b=y;
    cout<<"ud is a chutiya bokachoda";
}
int main(){
    //implicit call
   complex a(4,6);
   //explicit call
   complex b=complex(5,7);
   a.printnumber();
   b.printnumber();
     return 0;
}