#include<iostream>
using namespace std;
int main ()
{
    // // Pattern-1
    // // 1234
    // // 1234
    // // 1234
    // // 1234
    // int n;
    // cin>>n;
    // int i=1,j;
    // while(i<=n)
    // {
    //     j=1;
    //     while (j<=n)
    //     {
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // // Pattern-2
    // // 1234
    // // 1234
    // // 1234
    // // 1234
    // int n;
    // cin>>n;
    // int i=1,j;
    // while(i<=n)
    // {
    //     j=1;
    //     while (j<=n)
    //     {
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // // Pattern-3
    // // 4321
    // // 4321
    // // 4321
    // // 4321
    // int n;
    // cin>>n;
    // int i=1,j;
    // while(i<=n)
    // {
    //     j=1;
    //     while (j<=n)
    //     {
    //         cout<<n-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // // Pattern-4
    // // 123
    // // 456
    // // 789
    // int n;
    // cin>>n;
    // int i=1,j,count=1;
    // while(i<=n)
    // {
    //     j=1;
    //     while (j<=n)
    //     {
    //         cout<<count;
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // // Pattern-5
    // // *
    // // **
    // // ***
    // // ****
    // int n;
    // cin>>n;
    // int i=1,j;
    // while(i<=n)
    // {
    //     j=1;
    //     while (j<=n)
    //     {
    //         if (i>=j)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


//     // Pattern-6
//     // *
//     // **
//     // ***
//     // ****
//     int n;
//     cin>>n;
//     int row=1,col;
//     while(row<=n)
//     {
//         col=1;
//         while (col<=row)
//         {
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//  return 0;
// }


    // // Pattern-7
    // // 1
    // // 22
    // // 333
    // // 4444
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=row)
    //     {
    //         cout<<row;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-8
    // // 1
    // // 23
    // // 456
    // // 78910
    // int n;
    // cin>>n;
    // int row=1,col,count=1;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=row)
    //     {
    //         cout<<count;
    //         count++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-9      --> do without using count
    // // 1
    // // 23
    // // 345
    // // 4567
    // int n;
    // cin>>n;
    // int row=1,col,count;
    // while(row<=n)
    // {
    //     col=1;
    //     count=row;
    //     while (col<=row)
    //     {
    //         cout<<count;
    //         count++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-9      --> without using count
    // // 1
    // // 23
    // // 345
    // // 4567
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=row)
    //     {
    //         cout<<row+col-1;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-10      
    // // 1
    // // 21
    // // 321
    // // 4321
    // int n;
    // cin>>n;
    // int row=1,col,count;
    // while(row<=n)
    // {
    //     col=1;
    //     count=row;
    //     while (col<=row)
    //     {
    //         cout<<count;
    //         count--;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-11     
    // // 1
    // // 21
    // // 321
    // // 4321
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=row)
    //     {
    //         cout<<row-col+1;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-12    
    // // AAAA
    // // BBBB
    // // CCCC
    // // DDDD
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=n)
    //     {
    //         char ch = 'A'+row-1;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-13  
    // // ABCD
    // // ABCD
    // // ABCD
    // // ABCD
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=n)
    //     {
    //         char ch = 'A'+col-1;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-14
    // // ABCD
    // // EFGH
    // // IJKL
    // // MNOP
    // int n;
    // cin>>n;
    // int row=1,col,count=0;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=n) 
    //     {
    //         char ch = 'A'+count;
    //         cout<<ch;
    //         count++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-15
    // // ABCD
    // // BCDE
    // // CDEF
    // // DEFG
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=n) 
    //     {
    //         char ch = 'A'+row+col-2;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-16
    // // A
    // // BB
    // // CCC
    // // DDDD
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=row) 
    //     {
    //         char ch = 'A'+row-1;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-17
    // // A
    // // BC
    // // DEF
    // // GHIJ
    // int n;
    // cin>>n;
    // int row=1,col,count=0;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=row) 
    //     {
    //         char ch = 'A'+count;
    //         cout<<ch;
    //         count++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-18
    // // A
    // // BC
    // // CDE
    // // DEFG
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=row) 
    //     {
    //         char ch = 'A'+row+col-2;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-19
    // // D
    // // CD
    // // BCD
    // // ABCD
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=row) 
    //     {
    //         char ch = 'A'+n-row+col-1;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-20   --> My Method
    // //    *
    // //   **
    // //  ***
    // // ****
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=n) 
    //     { 
    //         if (col<=n-row)
    //         {
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-20   --> Tut Method
    // //    *
    // //   **
    // //  ***
    // // ****
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     // Space Print
    //     int space = n-row;
    //     while (space) 
    //     { 
    //         cout<<" "; 
    //         space--;
    //     }
    //     // Star Print
    //     col=1;
    //     while (col<=row)
    //     {
    //         cout<<"*";
    //         col++;
    //     }  
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-21
    // // ****
    // // ***
    // // **
    // // *
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     // Star Print
    //     int star = n-row+1;
    //     while (star) 
    //     { 
    //         cout<<"*"; 
    //         star--;
    //     }
    //     // Space Print
    //     col=1;
    //     while (col<=row)
    //     {
    //         cout<<" ";
    //         col++;
    //     }  
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-22    -->My Method
    // // ****
    // //  ***
    // //   **
    // //    *
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     col=1;
    //     while (col<=n)
    //     {
    //         if (row<=col)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //         col++;
    //     }  
    //     cout<<endl;
    //     row++;
    // }

    
    // // Pattern-22    -->Tut Method
    // // ****
    // //  ***
    // //   **
    // //    *
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     // Space Print
    //     int space = row-1;
    //     while (space) 
    //     { 
    //         cout<<" "; 
    //         space--;
    //     }
    //     // Star Print
    //     col=n;
    //     while (col>=row)
    //     {
    //         cout<<"*";
    //         col--;
    //     }  
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-23
    // // 1111
    // //  222
    // //   33
    // //    4
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     // Space Print
    //     int space = row-1;
    //     while (space) 
    //     { 
    //         cout<<" "; 
    //         space--;
    //     }
    //     // Star Print
    //     col=n;
    //     while (col>=row)
    //     {
    //         cout<<row;
    //         col--;
    //     }  
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-24
    // //    1
    // //   22
    // //  333
    // // 4444
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     // Space Print
    //     int space = n-row;
    //     while (space) 
    //     { 
    //         cout<<" "; 
    //         space--;
    //     }
    //     // Star Print
    //     col=1;
    //     while (col<=row)
    //     {
    //         cout<<row;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-25
    // // 1234
    // //  234
    // //   34
    // //    4
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     // Space Print
    //     int space = row-1;
    //     while (space) 
    //     { 
    //         cout<<"#"; 
    //         space--;
    //     }
    //     // Star Print
    //     col=row;
    //     while (col<=n)
    //     {
    //         cout<<col;
    //         col++;
    //     } 
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-26
    // //    1
    // //   23
    // //  456
    // // 78910
    // int n;
    // cin>>n;
    // int row=1,col,count=1;
    // while(row<=n)
    // {
    //     // Space Print
    //     int space = n-row;
    //     while (space) 
    //     { 
    //         cout<<" "; 
    //         space--;
    //     }
    //     // Star Print
    //     col=1;
    //     while (col<=row)
    //     {
    //         cout<<count;
    //         col++;
    //         count++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // // Pattern-27
    // //    1
    // //   121
    // //  12321
    // // 1234321
    // int n;
    // cin>>n;
    // int row=1,col;
    // while(row<=n)
    // {
    //     // Triangle-1
    //     int space = n-row;
    //     while (space) 
    //     { 
    //         cout<<" "; 
    //         space--;
    //     }
    //     // Triangle-2
    //     col=1;
    //     while (col<=row)
    //     {
    //         cout<<col;
    //         col++;
    //     }
    //     // Triangle-3
    //     col=1;
    //     while (col<row)
    //     {
    //         cout<<row-col;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;   
    // }


    // Pattern-28
    //  12344321
    //  123**321
    //  12****21
    //  1******1
    int n;
    cin>>n;
    int row=1,col;
    while(row<=n)
    {
        // Triangle-1
        col=1;
        while (col<=n-row+1) 
        { 
            cout<<col; 
            col++;
        }
        // Triangle-2
        col=1;
        while (col<=row-1)
        {
            cout<<"**";
            col++;
        }
        // Triangle-3
        col=n-row+1;
        while (col>=1)
        {
            cout<<col;
            col--;
        }
        cout<<endl;
        row++;   
    }
 return 0;
}