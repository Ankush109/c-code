#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) // i=0; i<4
    {

        for (int j = 0; j < n - 1 - i; j++) //j<4
        {
            if (arr[j] > arr[j + 1])  // 3,1,19,100,111
            {
                int temp = arr[j]; 
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;   //1,3,19,100,111
            }
        }
    }
    printf("Sorted array is:");
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",arr[i]);
    }
    
    return 0;
}