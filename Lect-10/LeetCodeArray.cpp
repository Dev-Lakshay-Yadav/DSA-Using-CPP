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


// // //Que-3- Find Duplicate
// void findUnique(int arr[], int n)
// {
//     int ans =0 ;
//     for (int i = 0; i < n; i++)
//     {
//         ans=ans^arr[i];
//     }
//     cout<<"Unique number is "<<ans;
// }


// // Que-3- Find Duplicate
// void findDuplicate(int arr[], int n)
// {
//     int i = 0, temp = 0;
//     while (i < n)
//     {
//         temp = arr[i];
//         int j = i + 1;
//         while (j < n)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cout << "Duplicate value is : " << arr[i];
//                 exit(0);
//             }
//             j++;
//         }
//         i++;
//     }
//     cout << "No Duplicate";
// }


int main()
{
    int size = 7;
    int arr[size] = {2, 3, 1, 6, 3, 6, 2};
    cout << "Original Array : ";
    display(arr, size);


    // // Que-1- Swap Alternate {1,2,3,4,5,6} <--> {2,1,4,3,6,5} 
    // swapAlternate(arr,size);
    // cout<<"Changedd Array : ";
    // display(arr,size);


    // // Que-2- Find unique element
    // findUnique(arr, size);



    // // Que-3- Find Duplicate
    // findDuplicate(arr, size);




    // Que-4- Find Array Intersection {1,2,3} , {3,4,5}   ans-3

    // Que-5- Pair Sum
    // Que-6- Triplet Sum
    // Que-7- sort 0's and 1's



    return 0;
}