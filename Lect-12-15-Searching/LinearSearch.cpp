// ####   LECT-9   ####

#include<iostream>
using namespace std;
 

bool search(int arr[],int size,int key)
{
    int i=0;
    while(i<size)
    {
        if(arr[i]==key)
        {
            return true;
        }
        i++;
    }
    return false;
}



int main ()
{
    int arr[8] = {4,8,2,5,72,7,8,24};
    bool ans = search(arr,8,72);
    if (ans)
    {
        cout<<"Yes Present";
    }
    else{
        cout<<"Not Present!!";
    }
    


 return 0;
}