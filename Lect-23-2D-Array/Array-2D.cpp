#include <iostream>
using namespace std;

void display(int arr[][3],int n,int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

    // Que-1-> Wave Print
    int j=0;
    void wavePrint(int arr[][3],int n, int m)
    {
        for (int i = 0; i < n; i++)
        {
            if(j == (m-1))
            {
                while(j>=0)
                {
                    cout<<arr[j][i]<<" ";
                    j--;
                }
                j=0;
            }
            else
            {
                while(j<m)
                {
                     cout<<arr[j][i]<<" ";
                     j++;
                }
                j = (m-1);
            }
        }
        
    }

int main()
{
    // creating 2D array
    //  int arr[2][2]={{1,2},{3,4}};
    //  int arr[2][2]={1,2,3,4};      // also work same as above

    // // taking input in 2D array column wise
    //  for(int i=0;i<2;i++)
    //  {
    //     for(int j=0;j<2;j++)
    //     {
    //         cin>>arr[j][i];
    //     }
    //  }

    // // taking input in 2D array row wise
    //  for(int i=0;i<2;i++)
    //  {
    //     for(int j=0;j<2;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    //  }


    // Que-1-> Wave Print
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    cout<<"Normal Print"<<endl;
    display(arr,3,3);
    cout<<"Wave Print"<<endl;
    wavePrint(arr,3,3);

    return 0;
}