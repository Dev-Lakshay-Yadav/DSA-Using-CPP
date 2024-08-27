#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int distValue = 0, cowCount = 1;
    // int arr[] = sort(arr) ;
    for (int i = 0; i < n; i++)
    {
        if (distValue + arr[i] >= mid)
        {
            distValue += arr[i];
        }
        else
        {
            cowCount++;
            if(cowCount > m || arr[i]<distValue)
            {
                return false;
            }
            distValue = arr[i];
        }
    }
    return true;
}

int aggressiveCows(int arr[], int n, int m)
{
    int i = 0, 
        start = 0, 
        ans = -1,
        maxi =-1;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,arr[i]);
    }
    int end = maxi;

    while (start < end)
    {
        int mid = (start + end) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[]={4,2,1,3,6};
    int n=5,m=2;
    cout<<"ans is : "<<aggressiveCows(arr,n,m);

    return 0;
}