
// 100% same as Painter's Partition Problem

#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int mid,int m){
    int studentCount = 1;
    int pageSum=0;
    for (int i = 0; i < n; i++)
    {
        if(pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateProblem(int arr[],int n,int m){
    int start=0,ans=0;
    int sum=0,i=0;
    while(i<n){
        sum += arr[i];
        i++;
    }
    int end = sum;
    while (start<end)
    {
        int mid = (start+end)/2;
        if (isPossible(arr,n,mid,m))
        {
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
    int arr[4] = {10,20,30,40};
    int n=4,m=2;
    cout<<"ans is : "<<allocateProblem(arr,n,m);
 
 return 0;
}