
// #####    SELECTION SORT      #####

#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<" ";
    }
    
}

void SelectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}


int main ()
{

    int arr[5]={64,25,12,22,11};
    int n=5;
    cout<<"Original Array : ";
    display(arr,n);
    cout<<endl;
    SelectionSort(arr,n);
    cout<<"Sorted Array : ";
    display(arr,n);
    
 return 0;
}