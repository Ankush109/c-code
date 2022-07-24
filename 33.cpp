#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    float rate;
    float returnvalue;

public:
    bankdeposit()
    { 
    }
    bankdeposit(int p, int y, float r); // r can be a be a value like 0.04
    bankdeposit(int p, int y, int r);
    void show();
};
bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    returnvalue = p;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}
bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r) / 100;
    returnvalue = p;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}
void bankdeposit::show()
{
    cout << endl
         << "principle amount was " << principal << "return value after " << years << "is" << returnvalue << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    bd3.show();
    // cout<<"enter the value of p y and r"<<endl;
    // cin>>p>>y>>r;
    // bd1=bankdeposit(p,y,r);
    // bd1.show();
    cout << "enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();
    return 0;
}  