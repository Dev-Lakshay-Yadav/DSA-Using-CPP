#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    // Problem-1   Reverse Integer
    int n;
    cin>>n;
    cout<<"Original number is : "<<n<<endl;
    int ans=0;
    while (n!=0)
    {
        int digit = n%10;
        if (ans>INT_MAX/10  || ans<INT_MIN/10)
        {
            cout<<"0";
            break;
        }
        ans=ans*10+digit;
        n=n/10;
    }
    cout<<"Reversed number is : "<<ans;

    // // Problem-2   Complement of base 10 integer
    // int n, m;
    // cin >> n;
    // m = n;
    // cout << "Original number is : " << n << endl;
    // int mask = 0;

    // while (m != 0)
    // {
    //     mask = mask << 1 | 1;
    //     m = m >> 1;
    // }
    // if (n == 0)
    // {
    //     cout << "Complement number is : 1" << endl;
    // }
    // else
    // {
    //     int ans = mask & (~n);
    //     cout << "Complement number is : " << ans;
    // }

    // // Problem-3   check whether n is power of 2 or not  --> My Logic
    // int n;
    // cin >> n;
    // cout << "Original number is : " << n << endl;
    // bool fact=true;
    // while (n != 1)
    // {
    //     if (n%2==0)
    //     {
    //         fact = true;
    //     }
    //     else
    //     {
    //         fact = false;
    //         cout<<"Not power of 2"<<endl;
    //         break;
    //     }
    //     n=n/2;
    // }
    // if (fact == true)
    // {
    //     cout << "Yes power of 2" << endl;
    // }

    // // Problem-3   check whether n is power of 2 or not  --> Tut Logic
    // int n;
    // cin >> n;
    // cout << "Original number is : " << n << endl;
    // bool fact = false;
    // int ans = 1;
    // for (int i = 0; i <= 30; i++)
    // {
    //     if (ans == n)
    //     {
    //         fact = true;
    //         break;
    //     }
    //     if (ans < INT_MAX/2)
    //     {
    //         ans *= 2;   
    //     }
    // }
    // if (fact == true)
    // {
    //     cout << "Yes Power of 2" << endl;
    // }
    // else
    // {
    //     cout << "Not power of 2" << endl;
    // }
    return 0;
}