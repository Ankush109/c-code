#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[100];
    int n, num, i,index;
    printf("Enter number");
    scanf("%d", &num);
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int low = 0;
    int high = n - 1;
    while (low <= high)  
// 0  1  2  3  4  |5  6  7  8  9 |
// 3  4  5  6  7  8  9  10 11 12
    
    {  

       printf("Low %d High %d\n",low,high);
        int mid = (low + high) / 2;  //2 
        if (num == arr[mid])
        {
            index=mid;
            printf("Present");
            break;
        }
        else if (num < arr[mid])
        {

            high = mid - 1;
        }
        else if (num > arr[mid])
        {
            low = mid + 1;
        }
          
    }
    printf("Index: %d",index);

    //         int a= sizeof(arr)/sizeof(arr[0]);
    //         printf("%d",a);
    return 0;
}