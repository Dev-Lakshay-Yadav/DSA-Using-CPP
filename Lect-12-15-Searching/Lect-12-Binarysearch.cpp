#include<iostream>
using namespace std;


void binarySearch(int arr[],int n,int num)
{
    int start=0,end=n-1;
    bool flag=false;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==num)
        {
            flag=true;
            break;
        }
        else if(arr[mid]<num)
        {
            start=mid+1;
        }
        else{
            end = mid-1;
        }
    }
    if(flag)
    {
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}



int main()
{
   //Binary search
   int n=8;
   int arr[n]={1,2,3,4,5,6,7,8};
   int num=5;
   binarySearch(arr,n,num);


    return 0;
}