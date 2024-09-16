#include<iostream>
#include<array>      // for -> array
#include<vector>     // for -> vector
#include<deque>      // for -> dequeue
#include<queue>      // for -> queue/priority queue
#include<list>       // for -> list
#include<stack>      // for -> stack
#include<set>        // for -> set
#include<map>        // for -> map
#include<algorithm>        // for -> algorithm
using namespace std;
int main ()
{
    // // Array  - Static {size of array fixed hai} Array not used in competitive programming
    // array<int,4> a ={1,2,3,4} ;  
    // // Ye neeche vale sabhi operations O(1) complexity mein perform ho rhe hai
    // cout<<a.size();  //finding size or array
    // cout<<a.at(2);     //given index par kya value hai
    // cout<<a.empty();   //give array empty or not empty-return-true-1  false-0
    // cout<<a.front();    // return array ka first element
    // cout<<a.back();     // return array ka last element


//     // Vector - Dynamic Array -{size of array variable hai input par}
//     // If vector of size 4 and we try to add 1 5th element then the size of vector becomes double as 8. But in reality jab vector ke size ka limit complete ho jata hai to ek nya vector banta hai double size ka or jo purane ki values thi vo nye vector mein dal di jati hai or purane vector ko delete kar diya jata hai
//     vector<int> v ;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     cout<<"size is : "<<v.size()<<endl;    // O/P->5->size is number of elements present in vector
//     cout<<"capacity is : "<<v.capacity()<<endl;  //O/P->8 because capcity is the limit of vector of holding array which gets doubled to 8 from 4 when we add 5 element.
//     cout<<v.front()<<endl;
//     cout<<v.back()<<endl;
//     v.pop_back();   // delete last element of vector
//     v.clear();     //vector ko clear kar dega or we can say saari values delete kar dega
// // Traversing an vector
//     for(int i : v)
//     {
//         cout<<i<<" ";
//     }
//     vector <int> last(5,3);    //all 5 values are assigned as 3
//     for(int i : last)
//     {
//         cout<<i<<" ";
//     }

     
    // // Dequeue -> double ended queue    ->It is an dynamic array
    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    // d.pop_back();
    // cout<<endl;
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<d.at(0)<<endl;
    // cout<<d.front();
    // cout<<d.back();
    // cout<<d.empty();
    // d.erase(d.begin(),d.begin()+1);    // 1 element deleted d.begin() vala element deleted


    // // List  -> list ko double link list se banaya gya hai stl mein
    // list <int> l;
    // l.push_back(1);
    // l.push_front(2);
    // for (int i: l)
    // {
    //     cout<<i<<" ";
    // }
    // l.erase(l.begin());    //iski complexity O(n) hogi because erase index tak traverse karke jata hai   -> begin lelement deleted
    // for (int i: l)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<l.size();
    // // copy one list in another
    // list <int> copy(l);


    // // Stack   ->  LIFO
    // stack <string> s;
    // s.push("lakshay");
    // s.push("sonu");
    // s.push("monu");
    // s.push("aman");
    // s.push("raman");
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
    // cout<<s.empty()<<endl;
    // int size = s.size();
    // for(int i ; i < size;i++)
    // {
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }


    // // Queue   -> FIFO
    // queue <string> q;
    // q.push("lakshay");
    // q.push("sonu");
    // q.push("monu");
    // q.push("aman");
    // q.push("raman");
    // int size = q.size();
    // for(int i=0 ;i<size;i++)
    // {
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }


    // Priority Queue   -> queue mein koi priority set hogi like first element should be maximum/minimum etc
    // By default priority queue max heap hota hai means first value is maximum which means jab bhi hum queue se koi element nikalege to vo element queue ka maximum element hoga
    // vice versa in case of min heap
    // // max heap
    // priority_queue <int> maxi;
    // maxi.push(2);
    // maxi.push(1);
    // maxi.push(3);
    // cout<<"Maxi Queue : ";
    // int sizemaxi = maxi.size();
    // for (int i = 0; i < sizemaxi; i++)
    // {
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }
    // cout<<endl;
    // // min heap
    // priority_queue <int,vector<int> , greater<int> > mini;
    // mini.push(2);
    // mini.push(1);
    // mini.push(3);
    // cout<<"Mini Queue : ";
    // int sizemini = mini.size();
    // for (int i = 0; i < sizemini; i++)
    // {
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }


    // // Set -> Only Store Unique Element
    // // Always store only unique values like if we put 5 4times then it will only store 1 time in set
    // // Always returns element in sorted order
    // // set vs Unordered set  ->unordered in unsorted and fast as compared to normal set
    // set <int> s;
    // s.insert(5);     // O(log n) complexity for insertion
    // s.insert(1);
    // s.insert(6);
    // s.insert(6);
    // s.insert(9);
    // s.insert(9);
    // for(auto i:s)
    // {
    //     cout<<i<<" ";    //Sorted and unique output
    // }
    // cout<<endl;
    // // s.erase(s.begin());    // 1st element deleted
    // // for(auto i:s)
    // // {
    // //     cout<<i<<" ";
    // // }
    // // Erase particular index element
    // set<int>::iterator it = s.begin();    // 0 index
    // it++;      //  1 index
    // s.erase(it);    // index 1 element deleted
    // for(auto i:s)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<s.count(5);    //i s5 present or not   1->true  0->false
    // // Find  - element ko find karke uska reference return karega  -- index value ->jsviuehfsb any random string
    // set<int>::iterator itr = s.find(5);
    // for(auto it = itr ; it!= s.end() ; it++)
    // {
    //     cout<<*it<<" ";
    // }


    // // Map
    // // Data stored in key value pair
    // map <int , string> m;
    // m[1] = "Lakshay";
    // m[2] = "sonu";
    // m[13] = "aman";
    // m.insert({5,"khali"});
    // for(auto i : m)
    // {
    //     cout<<i.first<<endl;    // first refers to key  and second refers to value
    // }
    // cout<<"count : "<<m.count(13)<<endl;;   // 1-> true         0-> false
    // cout<<"erase : "<<m.erase(13)<<endl;    // 1-> true         0-> false
    // for(auto i : m)
    // {
    //     cout<<i.first<<endl;
    // }
    // auto it = m.find(5);
    // for (auto i = it; i != m.end(); i++)
    // {
    //     cout<<(*i).first<<endl;
    // }


    // // Algorithm
    // vector <int> v ;
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(8);
    // v.push_back(9);
    // // element present or not
    // cout<<binary_search(v.begin(),v.end(),6)<<endl;   // 0->fase   1->true
    // Lower and upper bound
    // Lower bound means vector ki vo first value jo search ki gyi value se kam na ho which ic the equal value in this case as 6
    // Upper Bound means vo first value jo search ki gyi value se badi hai which is 8 in this case
    // But yha par index return hue hai to lower bound ->2 index par   and    upper bound ->3 index par
    // cout<<"Lower bound -> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    // cout<<"Upper bound -> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    // // min,max,swap methods
    // int a=3,b=5;
    // cout<<"value of a is : "<<a<<endl;
    // cout<<"value of b is : "<<b<<endl;
    // cout<<"Min of a,b is : "<<min(a,b)<<endl;
    // cout<<"Max of a,b is : "<<max(a,b)<<endl;
    // swap(a,b);
    // cout<<"value of a after swap is : "<<a<<endl;
    // cout<<"value of b after swap is : "<<b<<endl;

    // // String reverse
    // string s = "hello ji hii";
    // cout<<s<<endl;
    // reverse(s.begin(),s.end());
    // cout<<s<<endl;

    // // Rotate vectors,Array,Stack etc
    // vector <int> v;
    // v.push_back(6);
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(4);
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // rotate(v.begin(),v.begin()+1,v.end());    // sare element 1 place left shift ho gye or first element last ban gya
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // // Also we can sort vector --> ye by default sort function intro sort par work karta hai jo li 3 types ki sorting ka mix hai -->  Insertion Sort + Quick Sort = Heap sort
    // cout<<"Unsorted Vector : ";
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl<<"Sorted Vector : ";
    // sort(v.begin(),v.end());
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // } 
 return 0;
} 