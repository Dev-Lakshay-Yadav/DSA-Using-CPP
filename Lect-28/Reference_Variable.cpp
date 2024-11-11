#include<iostream>
using namespace std;

int sum (int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main ()
{
    // // Reference Variable   -->  same memory different names
    // int i =5;
    // int &j =i;   //j is reference variable of i 
    // cout<<"i = "<<i<<" and "<<"j = "<<j<<endl;
    // i++;
    // cout<<"i = "<<i<<" and "<<"j = "<<j<<endl;


    // Dynamic array creation with correct approach
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i<<" st element : ";
        cin>>arr[i];
    }
    cout<<"sum of array is : "<<sum(arr,n);

    // cpp mein koi garbage collection nhi hota to hume manually memory release karani hoti hai varna program crash kar jaega
    delete [] arr;       // releasing dynamic memory






    return 0;
}