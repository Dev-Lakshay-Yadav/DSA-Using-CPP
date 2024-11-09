#include<iostream>
using namespace std;

void display(int *p)
{
    cout<<"Address at p is : "<<p<<endl;
    cout<<"Value at p is : "<<*p<<endl;
}


void update(int *p)
{
    *p=*p+1;       // ye shi chalega matlab value to shi update hogi main me bhi because hum reference par jake value update kar rahe hai

    p=p+1;        // ye nhi chalega hum uska address update nhi kar sakte or agar update hogi bhi to kewal iss function k andar hi hoga main k andar ki value par uska koi effect nhi padega
    cout<<p<<endl;
    cout<<*p<<endl;
}

int getSum(int arr[],int n)   // behind the scenes arr as an pointer pass hota hai int arr[] is in real int *arr
{
    //cout<<arr<<endl; // ye jo yha arr mein receive hota hai vo original array ka reference hota hai value nhi isilie iss line ka output address hai
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}


int main ()
{
    // Functions
    // int value = 5 ;
    // int *p = & value;
    // display(p);
    // update(p);
    // display(p);
    int arr[5]={1,2,3,4,5};
    cout<<"Sum is "<<getSum(arr,5)<<endl;     // yha hum getSum() function ko array->arr ka address pass kate hai value nhi
    // or hum is pass mein arr ko customize karke pass bhi kar sakte hai jaise ki 0 index ka reference na pass karke uske aage vale index ka reference pass karna
    cout<<"Sum is "<<getSum(arr+2,3)<<endl;  // yha par hum array ke 2 index se data pass karna start kar rhe hai


    // Pointer in arrays 

// in case of integer array
    // int arr[10]={00,11,22,33,44,55,66,77,88,99};

    // // Array ka naam hi uske first memory block ka address hota hai
    // cout<<"Address of first memory block of arr is : "<<arr<<endl;
    // // by using address of operator &
    // cout<<"Address of first memory block of arr is : "<<&arr[0]<<endl;

    // cout<<"Array ke 0 location ki value : "<<*arr<<endl;  //arr address ki value print
    // cout<<"Array ke 0 location ki value : "<<*arr+1<<endl;   // 0 location ki value + 1
    // cout<<"Array ke 1 location ki value : "<<*(arr+1)<<endl;  // 0 se 1 location per shift karke 1 location ki value

    // cout<<"value of arr[5] is : "<<arr[5]<<endl;
    // cout<<"value of 5[arr] is : "<<5[arr]<<endl;
    // cout<<"value of arr[5] is : "<<*(arr+5)<<endl;    // above both statements are equal to this statement
    // int *z = arr;
    // cout<<3[z];

//     // In case of Character array
//      char ch[6] = "abcde";
//      cout<<"value of ch is : "<<ch<<endl;     // yha address nhi complete array hi print hoga

//      cout<<"Address of 0 index : "<<&ch<<endl;
//      cout<<"Value of 0 index : "<<*ch<<endl;

//      char *c = &ch[0];
//      cout<<"Pointer : "<<*c<<endl;
//      cout<<"Pointer : "<<&c<<endl;
//      cout<<"Pointer : "<<c<<endl;   //iss case mein jab tak /0 ya null character nhi milega vo nye nye addresses par jake print karta rahega
//     //  eg of upper case

//     char z = 'a';
//     char *ptr = &z;  // is case mein hum ptr mein z ke address ki copy bhej rhe hai
//     cout<<ptr<<endl;   // output a then some garbage value until it recaives a null character /0


// //   ###### ########## ##########
//     // char *s = "abcde";   // that's a very risky approach because iss case mein hum direct memory access kar rhe hai
//     // cout<<s;   // op-> abcde
// //   ###### ########## ##########

    return 0;
}