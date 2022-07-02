#include<bits/stdc++.h>
using namespace std;
/*
Sets are a type of associative containers in which each element 
has to be unique because the value of the element identifies it. 
The values are stored in a specific order. 
*/
int main()
{
    set<int> st; // syntax = "set<data_type> set_name"
    st = {22,1,3,6,3}; // storing values
    st.insert(10); // to store value
    st.insert(6); // here we storing 6 in "st" but 6 is already in the set
    // so only one 6 will be there in the "st" set

    // to print set
    set<int>::iterator itr; // defining iterator for set
    //"Iterators" are used to point at the memory addresses of STL containers.

    // for(itr = st.begin(); itr!=st.end(); ++itr){
    //     cout<<*itr<<" "; // output = 1 3 6 10 22 
    // }

    // we can use "auto itr" instead of "set<int>::iterator itr;""
    // here "auto" will autometcally define the datatype
    for(auto itr=st.begin(); itr!=st.end(); ++itr){
        cout<<*itr<<" "; // "*itr" is more like pointer, it points the address of set value here
        // with "++itr" (increment) it points to the next value of the set
        // and when itr reaches end of the set, loop breaks
    }
    cout<<endl;

    cout<<"Set Size: "<<st.size()<<endl;

    cout<<"Is set empty: "<<st.empty()<<endl; // 1-yes//2-no

    // to remove set element
    st.erase(10);
    cout<<"Set Size after(st.erase(10)): "<<st.size()<<endl;

    // to print set in reverse
    cout<<"Set after revrse: ";
    for(auto itr=st.rbegin(); itr!=st.rend(); ++itr){ // r = revrese
        cout<<*itr<<" ";
    }
    
    // default set always take element in asscending order
    // to store value in descending order in a set
    set<int,greater<int>> st2;
    st2 = {2,3,5,1,8};
    cout<<"\nSt2: ";
    for(auto itr=st2.begin(); itr!=st2.end(); ++itr){
        cout<<*itr<<" ";
    }

    // to find / count a element in a set
    auto a = st.find(3);
    cout<<"\n3 is present or not in st: "<<st.count(3)<<endl;

}