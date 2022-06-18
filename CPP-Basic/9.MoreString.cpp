#include<iostream>
#include<string>
using namespace std;
int main()
{
    //codes
    string str;
    getline(cin,str);
    cout<<"Initial String: "<<str<<endl;

    //string_name.push_back('character');
    str.push_back('s'); //"push_back()" - This function is used to input a character at the end of the string.
    cout<<"Stirng after push_back: "<<str<<endl;

    //string_name.pop_back('character');
    str.pop_back(); //"pop_back()" - Introduced from C++11(for strings), this function is used to delete the last character from the string.
    cout<<"Stirng after pop_back: "<<str<<endl;
}

//output
/*
Shawon
Initial String: Shawon
Stirng after push_back: Shawons
Stirng after pop_back: Shawon
*/
