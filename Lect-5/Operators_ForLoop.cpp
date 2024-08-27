#include<iostream>
using namespace std;
int main ()
{

    // // BITWISE OPERATORS
    // int a=4,b=6;
    // cout<<"AND Operator : "<<(a&b)<<endl;
    // cout<<"OR Operator : "<<(a|b)<<endl;
    // cout<<"NOT Operator : "<<(~a)<<endl;
    // cout<<"XOR Operator : "<<(a^b)<<endl;

    // // RIGHT SHIFT
    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // // LEFT SHIFT
    // cout<<(19<<1)<<endl;
    // cout<<(21<<1)<<endl;


    // // Fibonacci Series
    // int n;
    // cin>>n;
    // int oldestNumber=0,oldNumber=1,nextNumber=0;
    // for(int i=0;i<n;i++)
    // { 
    //     cout<<nextNumber<<",";
    //     oldestNumber = oldNumber;
    //     oldNumber = nextNumber;
    //     nextNumber=oldestNumber+oldNumber;
    // }


    // // given int n , return the diff b|w the product of its digits and the sum of its digits
    // int n,temp,pro=1,sum=0,diff=0;
    // cin>>n;
    // int i=n;
    // while(i>0)
    // {
    //     temp=i%10;
    //     pro=pro*temp;
    //     sum=sum+temp;
    //     i=i/10;
    // }
    // diff=pro-sum;
    // cout<<"Difference is : "<<diff;


    // count number of 1 bits   Hamming Weight Problem
    int n,count=0;
    cin>>n;
    while(n!=0)
    {
        if (n&1)
        {
            count++;
            n=n>>1;
        }
        else
        {
            n=n>>1;
        }      
    }
    cout<<"Number of 1's are : "<<count;

 
 return 0;
}