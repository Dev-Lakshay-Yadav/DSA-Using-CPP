#include<iostream>
#include<vector>

using namespace std;



// This show function can traverse any type of vector with the help of typename template
template <typename t>
void show(vector <t>& arr)
{
    for(const auto& value : arr)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}


  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> merged;
        int j=0,k=0;
        float sum=0;
        while(j<nums1.size() || k<nums2.size())
        {
            if( j<nums1.size() && nums1[j] < nums2[k])
            {
                merged.push_back(nums1[j]);
                sum += nums1[j];
                j++;
            }
            if( k<nums2.size() && nums2[k] < nums1[j])
            {
                merged.push_back(nums2[k]);
                sum += nums2[k];
                k++;
            }
        }
        int size = merged.size();
        if(size % 2 !=0)
        {
            int j = size/2;
            return merged[j];
        }
        float median = sum/size;
        return median;
    }

int main ()
{
    vector <int> arr = {1,2};
    vector <int> arr2 = {3,4};
    // vector <char> ch = {'d','s','s','g'};
    // show(arr);
    // show(ch);

    float ans = findMedianSortedArrays(arr,arr2);
    cout<<ans;
 
 return 0;
}