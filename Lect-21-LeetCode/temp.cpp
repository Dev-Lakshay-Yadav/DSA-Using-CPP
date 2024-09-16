#include <iostream>
#include <vector>
using namespace std;

bool sortedRotatedArray(vector<int> arr) {
    int size = arr.size();
    int count = 0;

    // Count drops in the array
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] > arr[i]) {
            count++;
        }
    }

    // Check if there's a drop between the last and the first element
    if (arr[size - 1] > arr[0]) {
        count++;
    }

    // The array is sorted and rotated if there's exactly one drop or no drop
    return count == 1 || count == 0;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    if (sortedRotatedArray(arr)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
