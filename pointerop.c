#include<stdio.h>
int main(){
    int ud=69;
    int *p;
    p=&ud;
    printf("the value is  %d" ,*&ud);
}
// * -> value at
// & -> address