#include <iostream>
using namespace std;

// // Que-1-> Length of string
// int getLength(char name[])
// {
//     int count=0;
//     for(int i=0;name[i]!='\0';i++)
//     {
//         count++;
//     }
//     return count;
// }


// // Que-2-> Reverse of string
// void reverseString(char name[])
// {
//     cout<<"Name before swap : "<<name<<endl;
//     int count=0;
//     for(int i=0;name[i]!='\0';i++)
//     {
//         count++;
//     }
//     int i=0,j=count-1;
//     while(i<j)
//     {
//         swap(name[i++],name[j--]);
//     }
//     cout<<"Name after swap : "<<name;
// }


// // Que-3-> Check Palindrome
// bool checkPalindrome(char name[])
// {
//     bool ans = 1;
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     int i = 0, j = count - 1;
//     while (i < j)
//     {
//         if (name[i] != name[j])
//         {
//             ans = 0;
//             return ans;
//         }
//         i++;
//         j--;
//     }
//     return ans;
// }


// Que-4-> Check Palindrome
bool checkPalindrome(char name[])
{
    bool ans = 1;
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    int i = 0, j = count - 1;
    while (i < j)
    {
        if (name[i] != name[j])
        {
            ans = 0;
            return ans;
        }
        i++;
        j--;
    }
    return ans;
}



int main()
{
    // //char array
    // char name[20];
    // cout<<"Enter your name : ";
    // cin>>name;
    // cout<<"Your name is : "<<name;


    // // Que-1-> Length of string
    // char name[20];
    // cout<<"Enter your name : ";
    // cin>>name;
    // cout<<"Lenth is : "<<getLength(name);


    // // Que-2-> Reverse of string
    // char name[20];
    // cout<<"Enter your name : ";
    // cin>>name;
    // reverseString(name);


    // // Que-3-> Check Palindrome
    // char name[20];
    // cout << "Enter your string : ";
    // cin >> name;
    // if (checkPalindrome(name) == 1)
    // {
    //     cout << "plaindrome";
    // }
    // else
    // {
    //     cout << "Not palindrome";
    // }


    // Que-4-> Check Palindrome
    char name[20];
    cout << "Enter your string : ";
    cin >> name;
    if (checkPalindrome(name) == 1)
    {
        cout << "plaindrome";
    }
    else
    {
        cout << "Not palindrome";
    }


    // uppercase to lowercase -> ch - 'A' + 'a'
    // lowercase to uppercase -> ch - 'a' + 'A'

    return 0;
}