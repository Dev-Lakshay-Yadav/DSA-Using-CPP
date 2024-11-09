// #include<iostream>
// #include<vector>

// using namespace std;

// // This show function can traverse any type of vector with the help of typename template
// template <typename t>
// void show(vector <t>& arr)
// {
//     for(const auto& value : arr)
//     {
//         cout<<value<<" ";
//     }
//     cout<<endl;
// }

//   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         vector <int> merged;
//         int j=0,k=0;
//         float sum=0;
//         while(j<nums1.size() || k<nums2.size())
//         {
//             if( j<nums1.size() && nums1[j] < nums2[k])
//             {
//                 merged.push_back(nums1[j]);
//                 sum += nums1[j];
//                 j++;
//             }
//             if( k<nums2.size() && nums2[k] < nums1[j])
//             {
//                 merged.push_back(nums2[k]);
//                 sum += nums2[k];
//                 k++;
//             }
//         }
//         int size = merged.size();
//         if(size % 2 !=0)
//         {
//             int j = size/2;
//             return merged[j];
//         }
//         float median = sum/size;
//         return median;
//     }

// int main ()
// {
//     vector <int> arr = {1,2};
//     vector <int> arr2 = {3,4};
//     // vector <char> ch = {'d','s','s','g'};
//     // show(arr);
//     // show(ch);

//     float ans = findMedianSortedArrays(arr,arr2);
//     cout<<ans;

//  return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     // double result = 0.1 + 0.2;
//     // cout<<result; // Output: 0.3

//   int n = 10;  // The range you want, 0 to n-1
//     int i = 0;   // Initial value of i
//     bool count = 0;  // 0 for incrementing, 1 for decrementing

//     while (true) {  // Infinite loop
//         cout << i << endl;

//         if (count == 0) {  // If incrementing
//             if (i == n - 1) {
//                 count = 1;  // Switch to decrementing
//             } else {
//                 i++;  // Increment i
//             }
//         }
//         else {  // If decrementing
//             if (i == 0) {
//                 count = 0;  // Switch to incrementing
//             } else {
//                 i--;  // Decrement i
//             }
//         }
//     }
//     return 0;
// }

// // Power
// #include <iostream>
// using namespace std;

// float power(float x, int n)
// {
//     float ans = 1;
//     int z = 0;
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         if(n<0)
//         {
//             z =-(n);
//         }
//         while (z > 0)
//         {
//             if (z % 2 == 1)
//             {
//                 ans = ans * x;
//                 z--;
//             }
//             else
//             {
//                 x = x * x;
//                 z = z / 2;
//             }
//         }
//         if(n<0)
//         {
//             ans = 1/ans;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     float x = 2;
//     int n = -2;
//     float a = power(x, n);
//     cout << "ans is : " << a;
//     return 0;
// }









// Accenture Rat problem
// #include <iostream>
// #include <vector>
// #include <numeric> // for accumulate

// using namespace std;

// int minimumHousesForFood(int r, int unit, const vector<int>& arr) {
//     // Check if the array is empty
//     if (arr.empty()) {
//         return -1;
//     }
    
//     // Calculate the total food required
//     int required_food = r * unit;
    
//     // Calculate the total food available
//     int total_food = accumulate(arr.begin(), arr.end(), 0);
    
//     // If total food is less than required food, return 0
//     if (total_food < required_food) {
//         return 0;
//     }
    
//     // Initialize variables to track the running sum and count of houses
//     int running_sum = 0;
//     int houses_count = 0;
    
//     // Traverse the array to find the minimum number of houses needed
//     for (int food : arr) {
//         running_sum += food;
//         houses_count++;
        
//         // Once we have enough food, return the house count
//         if (running_sum >= required_food) {
//             return houses_count;
//         }
//     }
    
//     // This return is redundant as we should have already returned if there's enough food
//     return -1;
// }

// int main() {
//     int r = 7;
//     int unit = 2;
//     // vector<int> arr = {2, 8, 3, 5, 7, 4, 1, 2};
    
//     // int result = minimumHousesForFood(r, unit, arr);
//     // cout << "Minimum number of houses needed: " << result << endl;  // Expected output is the minimum number of houses needed

//     int a = 'A'-'0';
//     cout<<a<<endl;

//     char z = '0'+a;
//     cout<<z;

//     return 0;
// }





// // diagonal in 2d matrix
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Height of the reverse 'N'

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (j == 0 || j == n - 1 || i + j == n - 1) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main ()
// {
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<arr[j][i];
//         }
//         cout<<endl;
//     }

//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main ()
// {

//     int arr[5] = {1,3,4,2,2};

//     for(int i=0;i<5;i++)
//     {
//         int j = abs(arr[i]);
//         if(j < 5 && arr[j]>=0)
//         {
//             arr[j] = -arr[j];
//         }
//         else if(j<5)
//         {
//             cout<<"hii : "<<j;
//         }
//     }
    
//     return 0;
// }





#include<iostream>
using namespace std;
int main ()
{
    int arr[5]={1,1,2,2,4};

    for(int i=0;i<5;i+=2)
    {
        int j=i+1;
        if(arr[i]==arr[j])
        {
            continue;
        }
        cout<<arr[i];
    }
    return 0;
}