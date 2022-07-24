#include<iostream>
using namespace std;
struct employee
{
    /* data */
    int eid;
    char favcharater;
    float salary;
};

int main(){
    enum Meal{breakfast,lunch,dinner};
    Meal m1= breakfast;
    cout<<m1;
    struct employee harry;
    harry.eid=1;
    harry.favcharater='c';
    harry.salary=12200000;
    cout<<"the value is "<<harry.eid<<endl;
      cout<<"the value is "<<harry.favcharater<<endl;
        cout<<"the value is "<<harry.salary<<endl;

     return 0;
}