
#include<iostream>
using namespace std;
class test
{
    int a;
    int b;

    public:
    test(int i,int j) : a(i),b(j)
    {
        cout<<"constructor executed";
        cout<<"value of a is"<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};
int main(){
    test a(1,3);
     return 0;
}  