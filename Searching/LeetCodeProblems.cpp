
// BINARY SEARCH LEETCODE PROBLEMS

#include<iostream>
using namespace std;


// // here we use pair type function because we have to return 2 integer values together
// // Que-1- Find First & Last Position of an Element in sorted Array
// pair<int,int> firstAndLastPosition(int arr[],int n,int key){
//     int s=0,e=n-1,left=-1,right=-1;
//     // First Position
//     while(s<=e){
//         int mid = s + (e-s)/2;
//         if(arr[mid]==key){
//             left = mid;
//             e = mid - 1;
//         }
//         else if(key>arr[mid]){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     // Last Position
//     s=0,e=n-1;
//     while(s<=e){
//         int mid = s + (e-s)/2;
//         if(arr[mid]==key){
//             right = mid;
//             s = mid + 1;
//         }
//         else if(key>arr[mid]){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return make_pair(left,right);    
// }


// // Que-2- Find Occurance of an integer
// int occuranceOfInteger(int arr[],int n,int key){
//     int s=0,e=n-1,count=0;
//     // First Position
//     while(s<=e){
//         int mid = s + (e-s)/2;
//         if(arr[mid]==key){
//             count++;
//             e = mid - 1;
//         }
//         else if(key>arr[mid]){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     // Last Position
//     s=0,e=n-1;
//     while(s<=e){
//         int mid = s + (e-s)/2;
//         if(arr[mid]==key){
//             count++;
//             s = mid + 1;
//         }
//         else if(key>arr[mid]){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return count;    
// }


// // Que-3- Find Peak Index in Mountain Array
// int peakIndexInMountainArray(int arr[],int n){
//     int s=0,e=n-1;
//     while(s<e)
//     {
//         int mid = s + (e-s)/2;
//         if (arr[mid]>arr[mid-1] & arr[mid]>arr[mid+1])
//         {
//             return arr[mid];
//             break;
//         }
//         else if(arr[mid-1] > arr[mid]){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//     }
//     return -1;
// }


// Que-4- Find Pivot in an Array
int pivotinArray(int arr[],int n){
    int s=0,e=n-1;
    while(s<e)
    {
        int mid = s + (e-s)/2;
        if (arr[mid]>arr[mid-1] & arr[mid]>arr[mid+1])
        {
            return arr[mid];
            break;
        }
        else if(arr[mid-1] > arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}





int main ()
{
    // Pair - It is used to make pair of 2 same or different type values together

    // // Que-1- Find First & Last Position of an Element in sorted Array
    // int n=11;
    // int arr [n] ={0,1,2,4,5,6,6,6,7,8,9};
    // pair<int,int>result = firstAndLastPosition(arr,n,6);
    // cout<<"First & Last Position of 6 is at index : "<<result.first<<" & "<<result.second;

    // // Que-2- Find Occurance of an integer
    // int n=8;
    // int arr [n] ={0,1,2,3,3,3,3,5};
    // cout<<"Ocuurance of 3 in array is : "<<occuranceOfInteger(arr,n,3);

    // // Que-3- Find Peak Index in Mountain Array
    // int n=8;
    // int arr[n] = {3,4,5,7,5,4,2,1};
    // cout<<"Highest number in array is : "<<peakIndexInMountainArray(arr,n);


    // Que-3- Find Pivot in an Array
    int n=8;
    int arr[n] = {3,4,5,7,5,4,2,1};
    cout<<"Highest number in array is : "<<pivotinArray(arr,n);
    

    
 return 0;
} 