#include<iostream>
#include<math.h>
using namespace std;
int main ()
{

    // // Problem-1   Reverse Integer
    // int n;
    // cin>>n;
    // cout<<"Original number is : "<<n<<endl;
    // int ans=0;
    // while (n!=0)
    // {
    //     int digit = n%10;
    //     if (ans>INT_MAX/10  || ans<INT_MIN/10)
    //     {
    //         cout<<"0";
    //         break;
    //     }
    //     ans=ans*10+digit;
    //     n=n/10;
    // }
    // cout<<"Reversed number is : "<<ans;


    // Problem-2   1's Complement
    int n;
    cin>>n;
    cout<<"Original number is : "<<n<<endl;
    int ans=0,i=0;
    while (n!=0)
    {
        int bit = n&1;
        int digit = ~bit;
        ans=digit*pow(10,i)+ans;  
        n=n>>1;
        i++;
    }
    cout<<"Reversed number is : "<<ans;
 
 return 0;
}