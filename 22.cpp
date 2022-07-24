#include <iostream>
#include <string>
using namespace std;
class binary
{

    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_comp(void);
    void display(void);
};

void binary :: read(void){
    cout<<"enter a binary numnber";
    cin>>s;
}
void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorect binary format"<<endl;
        } 
    }
  
    
}

void binary :: ones_comp(void){
    for (int i = 0; i < s.length(); i++)
    {
       if(s.at(i)=='0'){
           s.at(i)='1';
       }else{
           s.at(i)='0';
       }
    }
    
}
void binary :: display(void){
    cout<<"displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    
}
int main()
{
    // oops - classes and object
    // c++ -> c with classes
    // class-> extension of structures (in c)
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_comp();
    b.display();
    return 0;
}