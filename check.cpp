#include<iostream>
using namespace std;

int main(){

            //0 1 2 3 4 5  
    int n;  //r a c e c a r
    cin>>n; // 3

    char arr[n+1];
    cin>>arr; //mum
    bool check =1;
    for (int i = 0; i < n; i++) 
    {
        if(arr[i]!=arr[n-1-i])  // r ! = a
                                //  a != c
                                // c ! = e
                                
        {
            check=0;
            break;
        }
    }
    if(check== true)
    {
        cout<<"number is palindrome";

    }
    else
    {
        cout<<"number is not a palindrome";
    }

     return 0;
}