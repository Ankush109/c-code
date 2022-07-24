#include <stdio.h>
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insertionsort(int a[], int n)
{
    int key, j;
    // loop for passes
    for (int i = 1; i <= n - 1; i++)
    {

        key = a[i];
        j = i - 1;
        // loop for passes
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main()
{
    // 12,54,12,13,14,15
    int a[] = {12, 54, 12, 13, 14, 15};
    int n = 6;

    printArray(a, n);
    insertionsort(a, n);
    printArray(a, n);
    return 0;
}