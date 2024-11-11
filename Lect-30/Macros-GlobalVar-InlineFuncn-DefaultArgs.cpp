
// // MACRO   --> HW -> for more visit gfg
// #include<iostream>
// using namespace std;
// #define PI 3.14   // macro creation
// int main ()
// {
//     // MACRO  -- for optimization of code
//     // macro koi variable nhi hai to ye koi space bhi nhi leta to jab bhi code compile hota uss se phle humne jha pr bhi macro ka name likha hai vha par uski value aa jaegi or code compilaion k time par ye value direct use hogi to humne koi variable ka space bhi nhi lia or space complexity better ho gyi
//     //  macro ko ek baar declare karne k baad change bhi nhi kar sakte
//     // PI = PI + 1 ;  // Not Possible
//     int r=5;
//     double pi = 3.14;
//     // double area = pi*r*r;   // normal method
//     double area = PI*r*r;      // by using macro
//     cout<<"Area is : "<<area;
//     return 0;
// }


// //  Global Variable
// #include<iostream>
// using namespace std;
// void a(int &i)
// {
//     cout<<i<<endl;
// }
// void b(int &i)
// {
//     cout<<i<<endl;
// }
// int main ()
// {
//     int i=5;
//     a(i);
//     b(i);
//     return 0;
// }


// Inline Functions  -> used for performance enhancement  -> used to reduce functions call overhead
// ye same hai macro ki tarah isme hum ek inline function bnate hai jo ki same macro ke tarah compile hone k baad har ek call par as an function serve na hokr direct code serve hota hai jis se ye faeda hai ki humara program kisi function call ki time taken se or function mein jo argument hai unke creation se bach jata hai copy na use karke reference variable use krte hai yha par hum
// agar hamara function code 1 line ka hai to inline bana sakte hai
// agar 2-3 line ka hai to kuch pta nhi compiler bnane de ya nhi
// lekin agar 3 se jyada line ka hai to bilkul nhi bna sakte
// #include<iostream>
// using namespace std;
// inline int getMAx(int &a,int &b)
// {
//     return (a>b) ? a : b;
// }
// int main ()
// {
//     int a=1,b=2,ans=0;
//     ans = getMAx(a,b);
//     cout<<"ans is  : "<<ans<<endl;
//     cout<<"Default value of a and b is : "<<a<<" , "<<b<<endl;
//     a+=3;
//     b+=1;
//     ans = getMAx(a,b);
//     cout<<"updated value of a and b is : "<<a<<" , "<<b<<endl;
//     cout<<"ans is  : "<<ans<<endl;
//     return 0;
// }


// Default Arguments  -> function ke argument/parameter ko koi default value provide kar dena taki jab koi function call me vo value user pass na kre to function dii gyi default value par run kare
// Aur default argument/parameter ko hamesa right most parameter/argument se decalre karna shuru kare function mein
#include<iostream>
using namespace std;
void display (int arr[],int n,int start=0)   //here start is default argument/paramaeter with value 0
{
    for(int i=start;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main ()
{
    int arr[5] = {1,2,3,4,5};
    display(arr,5);
    return 0;
}