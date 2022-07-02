#include <bits/stdc++.h>
using namespace std;

//auto
/* auto keyword: The auto keyword specifies that the type of the variable 
that is being declared will be automatically deducted from its initializer. 
In the case of functions, if their return type is auto then that will be 
evaluated by return type expression at runtime. Good use of auto is to avoid 
long initializations when creating iterators for containers.   
*/

int main()
{
    auto x = 1; // here x is an integer as 1 is is a integer
    auto s = "C-Plus-Plus"; // here s is a string
    cout<<x<<" "<<s<<endl;
}