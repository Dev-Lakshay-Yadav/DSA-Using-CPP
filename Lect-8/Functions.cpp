#include <iostream>
using namespace std;


// int func(int a, int b)
// {
//     int z = a + b;
//     return z;
// }


//     // Even odd
// bool isEven(int num){
//     if(num % 2==0)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }
// }


// // nCr factorial
// int fact(int n)
// {
//     int fact =1;
//     for (int i = 1; i <=n; i++)
//     {
//         fact = fact*i;
//     }
//     return fact;
// }
// int nCr (int n,int r)
// {
//     int ans = (fact(n)/((fact(r)*fact(n-r))));
//     return ans;
// }


// // AP
// int AP (int n)
// {
//     return ((3*n)+7);
// }



// // SetBits 1
// int setBits(int a,int b)
// {
//     int count =0;
//     while (a!=0 || b!=0)
//     {
//         if (a&1 && b&1)
//         {
//             cout<<"if";
//             count +=2;
//             a=a>>1;
//             b=b>>1;
//         }
//         else if(a&1 || b&1)
//         {
//             cout<<"if-else";
//             count++;
//             a=a>>1;
//             b=b>>1;
//         }
//         else
//         {
//             cout<<"else";
//             a=a>>1;
//             b=b>>1;
//         }
//     }
//     return count;
// }



// // Fibonacci Series
// void fibonacci(int n)
// {
//     int ans = 0, old = 1, oldest = 0;
//     if (n == 1)
//     {
//         cout << ans;
//     }
//     else if (n == 1)
//     {
//         cout << ans << " " << old << " ";
//     }
//     else
//     {
//         cout << ans << " " << old << " ";
//         for (int i = 1; i < n - 1; i++)
//         {
//             ans = old + oldest;
//             cout << ans << " ";
//             oldest = old;
//             old = ans;
//         }
//     }
// }

int main()
{
    // int a=3, b=4;
    // cout<<"sum of a and b is : "<<func(a,b);


    // // Even odd
    // int num;
    // cin>>num;
    // if (isEven(num))
    // {
    //     cout<<num<<" is even";
    // }
    // else
    // {
    //     cout<<num<<" is odd";
    // }


    // // nCr factorial
    //     int n,r;
    //     cout<<"Enter value of n :";
    //     cin>>n;
    //     cout<<"Enter value of r :";
    //     cin>>r;
    //     cout<<"fact is : "<<nCr(n,r);


    // // AP
    // int n;
    // cin>>n;
    // cout<<n<<" term of AP is : "<<AP(n);


    // // SetBits
    // int a,b;
    // cin>>a>>b;
    // cout<<"Number of SetBits in "<<a<<" and "<<b<<" are : "<<setBits(a,b);


    // // Fibpnacci
    // int n;
    // cin >> n;
    // fibonacci(n);

    return 0;
}