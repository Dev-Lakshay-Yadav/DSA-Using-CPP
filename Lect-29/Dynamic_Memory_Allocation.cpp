#include <iostream>
using namespace std;
int main()
{
    // // Dynamic Memory Allocation
    // // 2-D Array
    // int n,m;
    // cout<<"Enter number of rows : ";
    // cin>>n;
    // cout<<"Enter number of columns : ";
    // cin>>m;

    // int **arr = new int*[n];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = new int[m];
    // }
    // // 2D Array creation done

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<"Enter "<<i<<","<<j<<" th element : ";
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<"2D Array is "<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }

    // // Releasing 2D array memory
    // for (int i = 0; i < n; i++)
    // {
    //     delete [] arr[i];
    // }
    // delete []arr;

    // Jaggered Array
     int row;
    cout << "Enter number of rows: ";
    cin >> row;

    int** arr = new int*[row];
    int* cols = new int[row]; // Array to store column sizes for each row

    for (int i = 0; i < row; i++) {
        int col;
        cout << "Enter number of columns for row " << i << ": ";
        cin >> col;
        cols[i] = col; // Store column size for the row
        arr[i] = new int[col];

        for (int j = 0; j < col; j++) {
            cout << "Enter value for (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    // Display the jagged array
    cout << "\nJagged Array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Releasing memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] cols;


    return 0;
}