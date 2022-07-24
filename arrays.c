#include<stdio.h>
int main(){
    int arr[10];
    int *ptr =&arr[0];
    ptr=ptr+2;
    if( ptr==&arr[2]){
        printf("these point to the same location in the memory");
    }
    else{
        printf("these do not point to the same location in the memory");
    }
}