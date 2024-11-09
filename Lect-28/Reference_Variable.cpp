#include<iostream>
using namespace std;
int main ()
{
    // Reference Variable   -->  same memory different names
    int i =5;
    int &j =i;   //j is reference variable of i 
    cout<<"i = "<<i<<" and "<<"j = "<<j<<endl;
    i++;
    cout<<"i = "<<i<<" and "<<"j = "<<j<<endl;

    return 0;
}