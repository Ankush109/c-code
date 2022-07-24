#include<stdio.h>
int main(){
    int sub=5; //roham,soham ,mohan
    int std=3; //maths,history,pop,
    int marks[3][5];
    for(int i=0;i<std;i++){ // for each student
        for(int j=0;j<sub;j++){
            printf("enter the marks of subject "); // for subjects
            scanf("%d",&marks[i][j]);
        }
    }
        for(int i=0;i<std;i++){
        for(int j=0;j<sub;j++){
            printf(" the marks of subjects are");
            printf("%d",marks[i][j]);
        }
    }
}