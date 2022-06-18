#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "I love Programming";
    cout<<"Initial String: "<<str<<endl;
    cout<<"String Size/length: "<<str.length()<<endl;

    //resizing the string
    str.resize(25); //"string_name.resize(size)"-This function changes the size of the string, the size can be increased or decreased.
    cout<<"After resizing the String>>>"<<endl;
    cout<<"String: "<<str<<endl;
    //capacity of the string
    cout<<"Capacity of the String is: "<<str.capacity()<<endl;
    /*
    "string_name.capacity()" - This function returns the capacity allocated to the string,
     which can be equal to or more than the size of the string. Additional space is allocated
     so that when the new characters are added to the string, the operations can be done efficiently.
     */
     cout<<"String Length: "<<str.length()<<endl;

     //shrinking the string
     str.shrink_to_fit() ;
     /*
     "string_name.shrink_to_fit() ;" - This function decreases the capacity of the string and makes it
     equal to the minimum capacity of the string. This operation is useful to save additional memory
     if we are sure that no further addition of characters has to be made.
     */

     cout<<"After shrinking , new capacity: " << str.capacity()<<endl;
}

//output
/*
Initial String: I love Programming
String Size/length: 18
After resizing the String>>>
String: I love Programming
Capacity of the String is: 36
String Length: 25
After shrinking , new capacity: 25
*/
