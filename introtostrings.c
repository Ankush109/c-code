// #include<stdio.h>
// int main(){
//     char str[]="ankush";
//  char *ptr =str;
//     while(*ptr!='\0'){
       
//         printf("%c",*ptr);
//         ptr++;
//     }
// }
// easy way

// #include<stdio.h>
// int main(){
//    char *ptr ="ankush";
//    printf("%s",ptr);  // format specifieer for string


// }
#include<stdio.h>
#include<string.h>
int main(){
    char *st="harry";
    int length =strlen(st);
    printf("%d",length);

}