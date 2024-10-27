#include<iostream>
using namespace std;

// Here we are finding (a^b)%n
int algo(int a,int b,int n)
{
    int res=1;
    while(b>0)
    {
        if(b&1)   //odd number
        {
            res = (1LL*(res)*(a)%n)%n;

        }
        a = (1LL*(a)%n * (a)%n)%n;
        b = b>>1;   // divide by 2 is jyada optimised hota hai right shift so it is advised to more work with bits
    }
    return res;
}


int main ()
{
    // int a=3,b=1,n=2;
    int a=4,b=3,n=10;
    int ans = algo(a,b,n);
    cout<<ans;
 return 0;
}