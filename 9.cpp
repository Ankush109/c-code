#include<iostream>
using namespace std;

int main(){
        int age;
        cout<<"enter your age";
        cin>>age;
        // if(age<18){
        //     cout<<"you are a kid you cannot come to the party"<<endl;
        // }
        // else if(age==18){
        //     cout<<"you are a kid "<<endl;
        // }
        // else{
        //     cout<<"you can come to the party"<<endl;
        // }
        switch (age)
        {
        case 18:
        cout<<"you are just a kid";
            break;
         case 22:
        cout<<"you can cum";
            break;
             case 26:
        cout<<"you have to take ganja";
            break;
             case 28:
        cout<<"you should get laid";
            break;
             case 78:
        cout<<"you are too old man";
            break;
        default:
        cout<<"no special cases";
            break;
        }
        return 0 ;
}