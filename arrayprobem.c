#include <stdio.h>
#define MAX_SIZE 100
int sum(int arr[],int n , int flag);
int main()
{
    int arr[MAX_SIZE];
    int i, n, flag;

    /* Input size and element in array */
    printf("Enter number  of elements the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the flag options");
    scanf("%d",&flag);
   
    /* Input element position to delete */
    // printf("Enter the element position to delete : ");
    // scanf("%d", &pos);


    
  int sum (int arr[],int n ,int flag){
      int sum=0,sop=0;
      if(flag==0){
          for(int i=0;i<=n;i=i+2)
          {                            
              sum=sum+arr[i];        
                                     
                                    
               
          }

      }else if(flag==1){
          for(int i=1;i<=n;i=i+2){
              sop=sop+arr[i];
               printf("%d",sum);
          }
      }
      return sum;
  }
   printf("%d",sum);
}