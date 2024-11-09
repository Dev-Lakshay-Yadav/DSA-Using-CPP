#include<iostream>
using namespace std;
int main ()
{

    // int num=5;

    // // Num ki value print
    // cout<<"Value of num is : "<<num<<endl;

    // // Address of num is -->  use & operator 
    // cout<<"Address of num is : "<<&num<<endl;

    // // *ptr ek pointer hai jo num ka address store karta hai
    // int *ptr = &num;  

    // cout<<"Address stored on ptr : "<<ptr<<endl;  // -->Address output karega  --> some address value
    // cout<<"Value of address stored : "<<*ptr<<endl;  // -->Value output karega -->5

    // // Increment Decrement 
    // ////////  ye nahi karna ye risky hai because iss se address change ho jaega 
    // /////cout<<"Address increment : "<<ptr++<<endl;  // -->Address Increase karega  --> some address value + 1


    // // iss case mein value iss liye print hoti hai because (*) yha par dereference operator hai
    // cout<<"Value increment : "<<++(*ptr)<<endl;  // -->Value Increase karega -->6  here *ptr means ptr par jo address hai uski value bta do

    // double d=12.5;
    // double *d2=&d;
    // cout<<"Size of Pointer : "<<sizeof(ptr)<<endl; //size is always same bcz it has to store addrs in all cases
    // cout<<"Size of Pointer : "<<sizeof(d2)<<endl;  //size is always same bcz it has to store addrs in all cases
    // // ye pointer ka fix size system architecture par depend karta hai ( 32 bit -> 4 ) and ( 64 bit -> 8 )



    // let suppose pointer starting mein 0 tha fir kisi ko point karaya
    int i=5;
    int *p =0;
    // cout<<"Pointer address before pointing i : "<<*p<<endl;   //run time error aaega jo kuch bhi print nhi hone dega
    p = &i;
    cout<<"Pointer address after pointing i : "<<*p<<endl;


    return 0;
}