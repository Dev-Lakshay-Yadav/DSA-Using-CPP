#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    int i=0;
    while(i<n)
    {
        cout<<arr[i]<<" ";
        i++;
    }
}

void insertionSort(int arr[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i],j = i-1 ;
        for (; j >= 0; j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}



int main ()
{
    int arr[5]={3,2,7,5,1};
    int n=5;
    cout<<"Array Before Sorting : ";
    display(arr,n);
    cout<<endl;
    insertionSort(arr,n);
    cout<<"Array After Sorting : ";
    display(arr,n);
 
 return 0;
}