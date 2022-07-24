#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count; // can be shared through all the objects in the classes

public:
    void setdata(void)
    {
        cout<<"enter the id"<<endl;
        cin >> id;
        count ++;
    }
    void getdata(void){
        cout<<"employe id is "<<id<<"and this is employee number"<<count<<endl;
    }
};
int employee::count; // the default value is 0
int main()
{
    employee ankush,debanjan,arnab;
    // ankush.id=1;  ==> cannot be done as id and count are private
    // ankush.count=1;
    ankush.setdata();
    ankush.getdata();

     debanjan.setdata();
    debanjan.getdata();


     arnab.setdata();
    arnab.getdata();
    return 0;
}