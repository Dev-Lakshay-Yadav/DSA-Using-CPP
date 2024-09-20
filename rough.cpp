#include<iostream>
#include<vector>

using namespace std;



// This show function can traverse any type of vector with the help of typename template
template <typename t>
void show(vector <t>& arr)
{
    for(const auto& value : arr)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}


int main ()
{
    vector <int> arr = {1,2,4,5,6};
    vector <char> ch = {'d','s','s','g'};
    show(arr);
    show(ch);
 
 return 0;
}