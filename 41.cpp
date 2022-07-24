#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void setbase2int(int a)
    {
        base2int = a;
    }
};
class derived :public base1 ,public base2{

public:
void show(){
    cout<<"the value of base 1 is"<<base1int<<endl;
     cout<<"the value of base 1 is"<<base2int<<endl;
      cout<<"the sum value of base 1 and base 2 is"<<base1int+base2int<<endl;

}

};
int main()
{
    derived ankush;
    ankush.setbase1int(23);
     ankush.setbase2int(7);
     ankush.show();
    return 0;
}