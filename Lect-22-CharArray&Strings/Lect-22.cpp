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


// // Que-4-> Check Palindrome
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



    // // Que-5-> Maximum Occuring character
    // char maxOccurCharacter(string s)
    // {
    //     int arr[26] = {0};
    //     // create an array of count of characters
    //     for(int i=0;i<s.length();i++)
    //     {
    //         char ch = s[i];
    //         // lowercase
    //         int number=0;
    //         if(ch >= 'a' && ch <= 'z')
    //         {
    //             number = ch - 'a';
    //         }
    //         // uppercase
    //         else 
    //         {
    //             number = ch - 'A';
    //         }
    //         arr[number]++;
    //     }
    //     // find maximum occ character
    //     int maxi = -1 , ans=0;
    //     for(int i=0;i<26;i++)
    //     {
    //         if(maxi<arr[i])
    //         {
    //             ans= i;
    //             maxi = arr[i];
    //         }
    //     }
    //     char finalAns = 'a' +ans;
    //     return finalAns;
    // }


    // Que-6->  Replace Spaces
    void replaceSpaces(string s)
    {
        string temp = "";

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == ' ')
            {
                temp.push_back('@');
                temp.push_back('4');
                temp.push_back('0');
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
        cout<<temp;
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


    // // Que-4-> Check Palindrome
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
    // uppercase to lowercase -> ch - 'A' + 'a'
    // lowercase to uppercase -> ch - 'a' + 'A'



    // // Que-5-> Maximum Occuring character
    // string s = "hello";
    // cout<<s<<endl;
    // char a = maxOccurCharacter(s);
    // cout<<"Max occuring character is : "<<a;



    // Que-6-> Replace Spaces
    string s = "My name is Lakshay";
    cout<<s<<endl;
    replaceSpaces(s);


    return 0;
}