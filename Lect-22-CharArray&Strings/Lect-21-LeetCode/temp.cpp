// #include <iostream>
// #include <vector>
// using namespace std;

// bool sortedRotatedArray(vector<int> arr) {
//     int size = arr.size();
//     int count = 0;

//     // Count drops in the array
//     for (int i = 1; i < size; i++) {
//         if (arr[i - 1] > arr[i]) {
//             count++;
//         }
//     }

//     // Check if there's a drop between the last and the first element
//     if (arr[size - 1] > arr[0]) {
//         count++;
//     }

//     // The array is sorted and rotated if there's exactly one drop or no drop
//     return count == 1 || count == 0;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     if (sortedRotatedArray(arr)) {
//         cout << "True" << endl;
//     } else {
//         cout << "False" << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

vector<int> twoSum(vector<int> &nums, int target)
{
    int len = nums.size();
    vector <pair<int,int>> temp;
    for(int i=0;i<len;i++)
    {
        temp.push_back({nums[i],i}); 
    }
    sort(temp.begin(), temp.end());
    vector<int> arr;
    int i = 0, j=len-1;
    while (i < j)
    {
        if(temp[i].first+temp[j].first == target)
        {
            arr.push_back(temp[i].second);
            arr.push_back(temp[j].second);
            break;
        }
        else if(temp[i].first+temp[j].first< target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    display(arr);
    return arr;
}

int main()
{
    vector<int> arr = {3,2,3};
    int target = 6;
    twoSum(arr, target);
    return 0;
}
