#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int maxnum=INT_MIN;
    int minnum=INT_MAX;
    for(int i=0;i<=n;i++){
        if(arr[i]>maxnum){
            maxnum=arr[i];
        }
        if(arr[i]<minnum){
            minnum=arr[i];
        }
    }
    cout<<"max"<<maxnum<<endl<<"min"<<minnum;
     return 0;
}