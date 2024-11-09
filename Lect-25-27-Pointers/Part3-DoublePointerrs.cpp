#include<iostream>
using namespace std;

void update(int **p)   // **p aane ka matlab pointer pass by value k trike se aaya hai
{
    //(p)++;    
    // sab same rhega kuch change nhi because pass by value aaya hai or iss case mein double pointer ne jo m ka address store kar rakha hai vo update hoga or pass by value k karan main() function mein koi change nhi aega


    // (*p)++;
    // iss case mein 1 change hoga jo ki l jo k ka address store kar rakha hai vo add hoke change ho jaega because khali m means l ka address and *m means l k address par rakhi value jo ki k ka address hai

    (**p)++;
    //is case mein bhi 1 change hoga jo ki k ki value ka hoga jo 5->6 ho jaegi because yha par hum **p kar rhe hai matlab m ki value jo ek address hai l ka or uss address ki value jo ki address hai k ka to iss address ki value update kar do jo 5 hai or 6 ho jaegi
}

int main ()
{

    // double pointers with functions
    int k=5;
    int *l = &k;
    int **m = &l;
    cout<<"before update function call : "<<k<<endl;
    cout<<"before update function call : "<<l<<endl;
    cout<<"before update function call : "<<m<<endl;
    update(m);
    cout<<"after update function call : "<<k<<endl;     
    cout<<"after update function call : "<<l<<endl;    
    cout<<"after update function call : "<<m<<endl;    


    // Double Pointers
    // int i=5;
    // int *ptr = &i;           // --> Single Pointer
    // cout<<"0 Star ptr : "<<ptr<<endl;
    // cout<<"1 Star ptr : "<<*ptr<<endl;
    // int **ptr2 = &ptr;       // --> Double Pointer
    // cout<<"0 Star ptr2 : "<<ptr2<<endl;
    // cout<<"1 Star ptr2 : "<<*ptr2<<endl;
    // cout<<"2 Star ptr2 : "<<**ptr2<<endl;

    // let ptr is a double pointer so when i cout 3 different cases then,
    // Case : 1 -> with 0 star * -> with 0 * pointer single * pointer ka address print karega
    // Case : 2 -> with signle * -> with 1 * pointer single * pointer ki value print karega jo ki integer ka address hoga
    // Case : 3 -> with double * -> with 2 * pointer single * pointer ki value pr jo address hai uski value dega jo integer ki value hogi





    return 0;
}