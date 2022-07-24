#include<iostream>
using namespace std;

class complex {
    int a,b;
    // creating a constructor
    public:
    complex(void);  //constructor declaration
  void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i"<<endl;
    }



};
complex :: complex(void){
    a=10;
    b=0;
    cout<<"ud is a chutiya bokachoda";
}
int main(){
    complex c1,c2,c3;
    c1.printnumber();
       c2.printnumber();
          c3.printnumber();
     return 0;
}