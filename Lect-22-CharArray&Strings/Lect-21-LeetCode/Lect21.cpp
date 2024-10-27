#include<iostream>
#include<vector>
using namespace std;

void display (vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

// Que-1- Rotate Array
void rotateArray(vector <int> arr,int k)
{
    int size = arr.size();
    cout<<"Original array is : ";
    display(arr);
    vector <int> temp(size);
    for (int i = 0; i < size; i++)
    {
        temp[(i+k)%size] = arr[i];
    }
    arr = temp;      // copying temp array values in arr array
    cout<<"Rotated array is : ";
    display(arr);
}


// // Que-2- Rotate Array
// bool sortedRotatedArray(vector <int> arr)
// {
//     int size = arr.size();
//     int count=0;
//     for (int i = 1; i < size; i++)
//     {
//         if(arr[i-1]>arr[i])
//         {
//             count++;
//         }
//     }
//     if(arr[size-1]>arr[0])
//     {
//         count++;
//     }
//     return count <= 1;
// }


// // Que-3- Rotate Array
// void sumOfArray(vector <int> arr1,vector <int> arr2)
// {
//     int size1 = arr1.size();
//     int size2 = arr2.size();
//     cout<<"Array 1 is : ";
//     display(arr1);
//     cout<<"Array 2 is : ";
//     display(arr2);

//     // array 3 ka size decide karna array1 or 2 mein jiska size bada vo array 3 ka size
//     int size3;
//     if(size1>size2)
//     {
//         size3=size1;
//     }
//     else
//     {
//         size3=size1;
//     }

//     vector <int> arr3(size3);
//     int sum1 =0,j=1;
//     for(int i = (size1-1);i>=0;i--)
//     {
//         sum1 = sum1 + (arr1[i]*j);
//         j=j*10;
//     }
//     int sum2 =0;
//     j=1;
//     for(int i = (size2-1);i>=0;i--)
//     {
//         sum2 = sum2 + (arr2[i]*j);
//         j=j*10;
//     }
//     int sum3= sum1+sum2;
//     j=10;
//     for (int i = (size3-1); i >= 0; i--)
//     {
//         arr3[i] = sum3 % j;
//         sum3 = sum3/j;
//     }

    
//     cout<<"Sum 3 is : ";
//     display(arr3);
// }


int main ()
{

    // Que-1- Rotate Array
    vector <int> arr ; 
    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(9);  
    arr.push_back(11);
    int k=1;           // array elements ko 2 step right kar do or rightmost ko leftmost ke side shift cyclic way
    // I/P  ->  {1,7,9,1}   rotate by 2  so  O/P -> {9,11,1,7}
    rotateArray(arr,k);


    // // Que-2- check if given array is sorted and rotated
    // vector <int> arr ; 
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    // arr.push_back(1);
    // arr.push_back(2);
    // bool ans = sortedRotatedArray(arr);
    // if(ans == 1)
    // {
    //     cout<<"Yes Sorted Rotated";
    // }
    // else
    // {
    //     cout<<"Not Sorted Rotated";
    // }


    // // Que-3- Sum of 2 arrays
    // vector <int> arr1={1,2,3,4},arr2={6};
    // sumOfArray(arr1,arr2); 


 return 0;
}