#include <stdio.h>
int main()
{
    int a[100], n, temp, i, b;

    printf("enter the size of array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
    
        scanf("%d", &a[i]);
    }
    for (b = 0; b < n - 1; b++) // traversring the array  // 0 1 2 3 4 5 
                                                          // 4 2 3 4 9 1
                                                          // 2 4 3 4 9 1
                                                          // 2 3 4 4 9 1
                                                          // 2 3 4 4 1 9
                                                           
                                                           // 2 3 4 1 4 9
                                                    

    {

        for (int k = 0; k < n - 1-b; k++)
        { // swap logic

            if (a[k] > a[k + 1])   // 4 > 2 

            {
                temp = a[k];  // temp =4 

                a[k] = a[k + 1]; // 4 = 2

                a[k + 1] = temp; //2 =temp
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ", a[i]);
    }
}