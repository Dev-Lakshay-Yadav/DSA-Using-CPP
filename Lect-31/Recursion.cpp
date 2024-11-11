#include<iostream>
using namespace std;

    int factorial(int n)
    {
        // base case
        if(n==0)
            return 1;
        
        return n *factorial(n-1);
    }

    int pow_Num(int number,int power)
    {
        if(power == 0)
            return 1;
        
        return number * pow_Num(number,power-1);
    }

    void count(int n)
    {
        if(n==0)
        {
            return ;
        }
        cout<<n<<endl;   // descending counting print
        count(n-1);
        cout<<n<<endl;   // ascending counting print
    }



int main ()
{ 
    // Recursion


    // // Find factorial by recursion 
    // int n;
    // cin>>n;
    // int ans = factorial(n);
    // cout<<ans;


    // // Pwer of 2
    // int power = 5;
    // int number = 2 ;
    // int ans =  pow_Num(number,power);
    // cout<<number<<" Ki power "<<power<<" = "<<ans;
    // Print Counting
    int n=5;
    count(5);
    


    return 0;
}