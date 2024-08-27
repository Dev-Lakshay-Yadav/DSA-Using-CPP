
// BINARY SEARCH LEETCODE PROBLEMS

#include <iostream>
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

// Que-3- Find Peak Index in Mountain Array
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

// // Que-4- Find Pivot in an Array
// int pivotinArray(int arr[],int n){
//     int s=0,e=n-1;
//     while(s<e)
//     {
//         int mid = s + (e-s)/2;
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else{
//             e = mid;
//         }
//     }
//     return s;
// }

// // Que-5- Find an element in a rotated sorted array
// int findKeyInRotatedArray(int arr[], int n, int key)
// {
//     int s = 0, e = n - 1, mid = 0;
//     while (s < e)
//     {
//         mid = s + (e - s) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] >= arr[s])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//     }
//     if (key > arr[mid])
//     {
//         int start = 0, end = mid - 1;
//         while (start <= end)
//         {
//             int median = (start + end) / 2;
//             if (arr[median] == key)
//             {
//                 return median;
//             }
//             else if (arr[median] > key)
//             {
//                 end = median;
//             }
//             else
//             {
//                 start = median;
//             }
//         }
//         return -1;
//     }
//     else
//     {
//         int start = s, end = n - 1;
//         while (start <= end)
//         {
//             int median = (start + end) / 2;
//             if (arr[median] == key)
//             {
//                 return median;
//             }
//             else if (arr[median] > key)
//             {
//                 start = median+1;
//             }
//             else
//             {
//                 end = median-1;
//             }
//         }
//         return -1;
//     }
// }

// Que-6- Find Square root using binary search
int mysqrtint(int n)
{
    int s = 0, e = n, mid = 0, sqrt = 0;
    while (s <= e)
    {
        mid = (s + e) / 2;
        sqrt = mid * mid;
        // cout<<"hello"<<mid;
        if (sqrt == n)
        {
            return mid;
        }
        else if (sqrt > n)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    if (mid * mid > n)
    {
        return mid - 1;
    }
    else
    {
        return mid;
    }
}
float mysqrt(float n)
{
    float intsqrt = mysqrtint(n);
    float s = intsqrt, e = intsqrt + 1;
    float mid;
    if (s * s == n)
    {
        return s;
    }
    while (e - s > 0.001)
    {
        mid = (s + e) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            e = mid;
        }
        else
        {
            s = mid;
        }
    }
    return mid;
}

int main()
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

    // sorted and rotated array means {1,2,3,4} --> {4,1,2,3}
    // iss case mein array 3&4 k bich se rotate hua hai to pivot element 4 ya 1 me se koi sa bhi le sakte hai
    // but hum neeche vale solution mein 1 ko pivot element le rhe hai
    // pivot -> vo element jis element k along array rotate hua hai
    // Que-4- Find Pivot in an Array --> Always give index of number 5 -->4-index as output because 5 is pivot element
    // int n=7;
    // int arr[n] = {6,8,10,17,5,3,1};
    // cout<<"Smallest number in array is : "<<pivotinArray(arr,n);

    // // Que-5- Find an element in a rotated sorted array
    // int n = 7;
    // int arr[n] = {6, 8, 10, 17, 5, 3, 1};
    // int key = 17;
    // cout << "Searched number in array is at index : " <<findKeyInRotatedArray(arr, n, key);

    // Que-6- Find Square root using binary search
    int n = 8;
    cout << "Square root of " << n << " is : " << mysqrt(n);

    return 0;
}