#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int maxsum = INT16_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += arr[k];
    //         }
    //         maxsum = max(maxsum, sum);
    //     }
    // }
    // cout << maxsum << endl;
    // return 0;

    // optimized approach
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];  
    // }
    // int currsum[n + 1];
    // currsum[0] = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     currsum[i] = currsum[i - 1] + arr[i - 1];
    // }
    // int maxsum = INT16_MIN;
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = currsum[i] - currsum[j];
    //         maxsum = max(sum, maxsum);
    //     }
    // }
    // cout << maxsum;

    // best  approach

   int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currsum=0;
    int maxsum=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        currsum+=arr[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
     

    }
    cout<<maxsum;
}  