#include <iostream>
using namespace std;
class complex; // function proto
class calculator
{
    public:
    int add(int a ,int b){
        return (a+b);
    }
    int sumrealcomplex(complex,complex);
    int sumCompComplex(complex, complex);
};
class complex{
    friend class calculator;
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i"<<endl;
    }
    // friend complex sumcomplex(complex o1,complex o2);
   

    
};   
int calculator :: sumCompComplex(complex o1,complex o2)
{
    return (o1.a+o2.a);
}
int calculator :: sumrealcomplex(complex o1,complex o2)
{
    return (o1.b+o2.b);
}

 // sumcomplex is allowed to access my private members

int main()

{
  complex o1,o2;
  o1.setnumber(1,4);
  o2.setnumber(5,3);
  calculator calc;
  int res = calc.sumCompComplex(o1,o2);
  cout<<"the sum of complex part is "<<res;
  int resc=calc.sumrealcomplex(o1,o2);
  cout<<"the sum of real part is "<<resc;
    return 0;
}