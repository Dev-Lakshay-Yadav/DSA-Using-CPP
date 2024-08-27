
// 100% same as Book Allocation Problem

#include<iostream>
using namespace std;


bool isPossible(int arr[],int n,int mid,int m){
    int paintArea = 0 , paintersCount=1;
    for (int i = 0; i < n; i++)
    {
        if (paintArea + arr[i] <= mid)
        {
            paintArea = arr[i] + paintArea;
        }
        else{
            paintersCount++;
            if(paintersCount > m || arr[i] > paintArea){
                return false;
            }
            paintArea = arr[i];
        }
    }
    return true;
}


int paintersPartition(int arr[],int n,int m){
    int ans =0,sum=0,start=0,end=0,i=0;
    while(i<n){
        sum+=arr[i];
        i++;
    }
    end=sum;
    while (start<end)
    {
        int mid = (start +end)/2;
        if(isPossible(arr,n,mid,m)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}


int main ()
{
    int arr[]={5,5,5,5};
    int n=4,m=2;
    cout<<"ans is : "<<paintersPartition(arr,n,m);
 return 0;
}