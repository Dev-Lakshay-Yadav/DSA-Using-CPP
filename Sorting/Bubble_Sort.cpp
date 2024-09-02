#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}

void bubbleSort(int arr[], int n)
{
    int i = 0, k = n;
    while (k != 0)
    {
        i=0;
        while (i < k)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
            i++;
        }
        k--;
    }
}

int main()
{
    int arr[5] = {3, 6, 2, 8, 4};
    int n = 5;
    cout << "Array Before sorting : ";
    display(arr, n);
    bubbleSort(arr, n);
    cout<<endl;
    cout << "Array After sorting : ";
    display(arr, n);

    return 0;
}