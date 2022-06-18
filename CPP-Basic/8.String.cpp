#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name = "Shawon";
    cout<< "My name is "<<name<<endl;
    cout << "The length of name is: "<<name.size()<<endl; //we can also use "name.length()" to determine size of a string
    cout<< "Printing first three char as sub string: " <<name.substr(0,3)<<endl; //here, "name.substr(index,length_of_sub_string)"
    cout<< "Printing sub string(index-2,size-2): " <<name.substr(2,2)<<endl; //here, "name.substr(index,length_of_sub_string)"
    //String Copy
    string name2;
    name2 = name;
    cout << "Copied String"<<name2<<endl;

    //String Add
    name2 += " Asif"; //it works like; name2 = name2 + "new string"
    cout << "Name2 after adding string: "<<name2<<endl;
    name = name + " "+ name2;
    cout<<"Name: "<<name<<endl;

    //String input (Only One word)
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"You Entered: "<<name<<endl;
    //in this way we just can input a word, we can't input  any line
    //To input a line with spaces
    string line;

    cout<<"Enter a line: ";
    cin.ignore(256,'\n'); //to ignore "new line" value, as new line is also a character
    getline(cin,line);
    cout<<"You entered: "<<line<<endl;
}
