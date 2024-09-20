#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6, 7, 8};
    vector<int> v3;

    int size1 = v1.size();
    int size2 = v2.size();

    int i = 0, j = 0, k = 0;
    while (j < size1 || k < size2)
    {
        if (j < size1) 
        {
            v3.push_back(v1[j]);
            j++;
        }
        if (k < size2) 
        {
            v3.push_back(v2[k]);
            k++;
        }
    }

    for (int i = 0; i < v3.size(); i++) 
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    return 0;
}
