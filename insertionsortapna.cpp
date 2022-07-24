#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){    // 1 33 ||  221 4 44 123
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];

            j--;
        }
        arr[j+1]=current;


    }
    cout<<"banchod sorted";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

     return 0;
}