#include <iostream>
using namespace std;

// Display Function
void display(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}


// // Que-1- Swap Alternate {1,2,3,4,5,6} <--> {2,1,4,3,6,5}
// void swapAlternate(int arr[],int n)
// {
//     int i=0;
//     while (i<n)
//     {
//         swap(arr[i],arr[i+1]);
//         i+=2;
//     }
// }


// // Que-2- Find unique element
// void findUnique(int arr[], int n)
// {
//     int i = 0;
//     while (i < n)
//     {
//         bool isUnique = true;
//         int j = 0;
//         while (j < n)
//         {
//             if (i!=j && arr[i] == arr[j])
//             {
//                 isUnique = false;
//                 break;            
//             }
//             j++;
//         }
//         if (isUnique)
//         {
//             cout<<arr[i]<<" is unique"<<endl;
//         }
//         i++;
//     }
// }
// //  Good Approach
// void findUnique(int arr[], int n)
// {
//     int ans =0 ;
//     for (int i = 0; i < n; i++)
//     {
//         ans=ans^arr[i];
//     }
//     cout<<"Unique number is "<<ans;
// }


// // Que-3- unique number of occurance
// bool UniqueOccurances(int arr[],int n){
// }


// // Que-4- Find Duplicate
// void findDuplicate(int arr[], int n)
// {
//     int ans=0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans^arr[i];
//     }
//     for (int i = 1; i < n; i++)
//     {
//         ans = ans^i;
//     }
//     cout<<ans<<" is duplicate";
// }



// // Que-6- Find Intersection of 2 arrays
// // unoptimized solution
// void findArrayIntersection (int arr1[],int arr2[],int n,int m)
// {
//     int ans=0;
//     for(int i=0;i<n;i++)
//     {
//         int element = arr1[i];
//         for(int j=0;j<m;j++)
//         { 
//             if(element==arr2[j])
//             {
//                 cout<<element<<" ";
//                 arr2[j]=INT_MIN; // to avoid duplicate elements in the intersection
//                 break;
//             }
//         }
//     }
// }
// // // Optimized solution
// void findArrayIntersection (int arr1[],int arr2[],int n,int m)
// {
//     int i=0,j=0;
//     while(i<n && j<m){
//         if(arr1[i] == arr2[j])
//         {
//             cout<<arr1[i];
//             i++,j++;
//         }
//         else if(arr1[i]<arr2[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }
// }


// Que-7- Pair Sum
void PairSum(int arr[],int n,int sum)
{
    int i=0,j=n,count=1;
    while(i<n && j>i)
    {
        if(arr[i]+arr[j] == sum)
        {
            cout<<"Pair Number "<<count<<" is : "<<arr[i]<<" + "<<arr[j]<<" = "<<sum<<endl;
            i++;
            n--;
            count++;
        }
        else if((arr[i]+arr[j])>sum)
        {
            j--;
        }
        else{
            i++;
        }
    }
}


// // Que-8- Triple Sum
// void PairSum(int arr[],int n,int sum)
// {
//     int i=0,count=1;
//     while(i<n)
//     {
//         int j=i+1;
//         while(j<n)
//         {
//             int k=j+1;
//             while(k<n)
//             {
//                 if(arr[i]+arr[j]+arr[k] == sum)
//                 {
//                     cout<<"Pair Number "<<count<<" is : "<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<sum<<endl;
//                     count++;
//                 }
//                 k++;
//             }
//             j++;
//         }
//         i++;
//     }
// }


// // Que-9- sort 0's & 1's
// void Sort01(int arr[],int n)
// {
//     int i=0,j=n;
//     while(i<j)
//     {
//         if(arr[i]==1  && arr[j]==0)
//         {
//             swap(arr[i],arr[j]);
//             i++;j--;
//         }
//         else if(arr[i]==0)
//         {
//             i++;
//         }
//         else
//         {
//             j--;
//         }
//     }
// }


// // Que-10- sort 0's , 1's & 2's
// void Sort012(int arr[],int n)
// {
//     int start = 0;
//     int mid = 0;
//     int end = n - 1;
//     while (mid <= end) {
//         if (arr[mid] == 0) {
//             swap(arr[start], arr[mid]);
//             start++;
//             mid++;
//         } else if (arr[mid] == 1) {
//             mid++;
//         } else { // nums[mid] == 2
//             swap(arr[mid], arr[end]);
//             end--;
//         }
//     }
// }








int main()
{
    // int size = 7;
    // int arr[size] = {2, 3, 1, 6, 4, 5, 2};
    // cout << "Original Array : ";
    // display(arr, size);


    // // Que-1- Swap Alternate {1,2,3,4,5,6} <--> {2,1,4,3,6,5} 
    // swapAlternate(arr,size);
    // cout<<"Changedd Array : ";
    // display(arr,size);


    // // Que-2- Find unique element from an array of odd number of elements {2,1,4,5,5,2,1} --> 4 is unique
    // findUnique(arr, size);

    // // Que-3- unique number of occurance arr[]={1,2,2,1,1,3}
    // So occurance of numbers is 1->3 times, 2->2 times & 3->1 time so all 3 numbers are uniquely occur then return true otherwise false
    // eg-2- arr[]={1,2,2,1,3}  here 1 and 2 comes same 2 times so return false
    // UniqueOccurances(arr, size);


    // // Que-4- Find Duplicate  - input is always real number (1,2,3,4,5,6,7,--) with a number repeat
    // findDuplicate(arr, size);


    // Que-5- Find all Duplicates



    // // Que-6- Find Intersection of 2 arrays
    // int n=5,m=4;
    // int arr1[n]={1,2,2,3,4};
    // int arr2[m]={2,2,3,3};
    // findArrayIntersection(arr1,arr2,n,m);


    // Que-7- Find Pair Sum
    int n=5,sum=5;
    int arr[n]={1,2,3,4,5};
    PairSum(arr,n,sum);


    // // Que-8- Find Triple Sum
    // int n=9,sum=8;
    // int arr[n]={0,1,3,2,6,7,5,8,9};
    // PairSum(arr,n,sum);


    // // Que-9- Sort 0's and 1's
    // int n=8;
    // int arr[n]={0,1,0,1,1,0,1,0};
    // cout<<"Original array is : ";
    // display(arr,n);
    // Sort01(arr,n);
    // cout<<"Sorted array is : ";
    // display(arr,n);


    // // Que-10- Sort 0's ,1's  and 2's
    // int n=9;
    // int arr[n]={0,2,2,1,0,1,1,0,2};
    // cout<<"Original array is : ";
    // display(arr,n);
    // Sort012(arr,n);
    // cout<<"Sorted array is : ";
    // display(arr,n);


    return 0;
}