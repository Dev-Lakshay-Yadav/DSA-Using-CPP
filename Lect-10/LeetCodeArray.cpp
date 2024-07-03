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






int main()
{
    int size = 7;
    int arr[size] = {2, 3, 1, 6, 4, 5, 2};
    cout << "Original Array : ";
    display(arr, size);


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


    // Que-6-Intersection of Two Arrays 

    // Que-5- Pair Sum
    // Que-6- Triplet Sum
    // Que-7- sort 0's and 1's



    return 0;
}