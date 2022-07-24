#include<stdio.h>
int main(){
    int i =345;
    int *ptr;
    int **ptr_ptr; // pointer to pointer 
    ptr=&i;
    ptr_ptr=&ptr;
    printf("the value of i is %d",**ptr_ptr);
}
