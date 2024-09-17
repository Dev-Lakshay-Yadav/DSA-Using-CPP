#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void display(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// // Que-1- Reverse Array
// void reverse(vector <int> arr,int n)
// {
//     int i=0,j=n-1;
//     cout<<"Before Reverse : ";
//     display(arr,n);
//     while(i<j)
//     {
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     cout<<"After Reverse : ";
//     display(arr,n);
// }


// // Que-2- Custom index Reverse Array
// void reverse(vector <int> arr,int n)
// {
//     int size=arr.size(),i=n+1,j=size-1;
//     cout<<j;
//     cout<<"Before Reverse : "<<endl;
//     display(arr,size);
//     while(i<j)
//     {
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     cout<<"Afterr Reverse : "<<endl;
//     display(arr,size);
// }


// // Que-3- Merge Sorted Array 3 arrays
// void mergeSortedArray(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
// {
//     int size1 = arr1.size();
//     int size2 = arr2.size();
//     int size3 = size1 + size2;
//     cout << "Array 1 is : ";
//     display(arr1, size1);
//     cout << "Array 2 is : ";
//     display(arr2, size2);
//     int  i = 0, j = 0;
//     for (int k = 0; k < size3; k++)
//     {
//         if(arr1[i]<arr2[j])
//         {
//             arr3.push_back(arr1[i]);
//             i++;
//         }
//         else
//         {
//             arr3.push_back(arr2[j]);
//             j++;
//         }
//     }
//     cout << "Array 3 is : ";
//     display(arr3, size3);
// }


// Que-4- Merge Sorted Array 2 arrays
void mergeSorted2Array(vector<int> &arr1, vector<int> &arr2)
{
    int size1 = arr1.size();
    int size2 = arr2.size();
    cout << "Array 1 is : ";
    display(arr1, size1);
    cout << "Array 2 is : ";
    display(arr2, size2);
    for (int i = size1-1; i >= 0; i--)
    {
        if(arr1[i] == 0)
        {
            arr1.pop_back();
        }
        else
        {
            arr1.push_back(arr2[i]);
        }
    }
    sort(arr1.begin(),arr1.end());
    cout << "Final Array is : ";
    display(arr1, size1);
}


// // Que-5- Move Zeroes Right
// void moveZeroesRight(vector<int> &arr)
// {
//     int size = arr.size();
//     cout << "Original Array is : ";
//     display(arr, size);
//     int i = 0,j=i+1;
//     while (j<size)
//     {
//         if(arr[i]==0 && arr[j]!=0)
//         {
//             swap(arr[i],arr[j]);
//         }
//         else if(arr[i]==0)
//         {
//             j++;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     cout << "Final Array is : ";
//     display(arr, size);
// }

int main()
{
    // // Que-1- Reverse Array
    // vector <int> arr;
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    // int n = arr.size();
    // reverse(arr,n);


    // // Que-2- Custom index reverse
    // vector <int> arr;
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    // arr.push_back(6);
    // arr.push_back(7);
    // int n = 3;
    // reverse(arr,n);


    // // Que-3- Merge Sorted Array 3 arrays
    // vector<int> arr1 = {1, 3, 5, 7, 9}, arr2 = {2, 4, 6}, arr3;
    // mergeSortedArray(arr1, arr2, arr3);


    // Que-4- Merge Sorted Array 2 arrays
    vector<int> arr1 = {1,2,3,0,0,0}, arr2 = {1,2,3};
    mergeSorted2Array(arr1, arr2);

    // // Que-5- Move Zeroes Right
    // vector<int> arr = {0,1,0,3,12,0};
    // moveZeroesRight(arr);


    return 0;
}