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

#include <iostream>

using namespace std;

int main() {
    // double result = 0.1 + 0.2;
    // cout<<result; // Output: 0.3

  int n = 10;  // The range you want, 0 to n-1
    int i = 0;   // Initial value of i
    bool count = 0;  // 0 for incrementing, 1 for decrementing
    
    while (true) {  // Infinite loop
        cout << i << endl;

        if (count == 0) {  // If incrementing
            if (i == n - 1) {
                count = 1;  // Switch to decrementing
            } else {
                i++;  // Increment i
            }
        } 
        else {  // If decrementing
            if (i == 0) {
                count = 0;  // Switch to incrementing
            } else {
                i--;  // Decrement i
            }
        }
    }


    return 0;
}
