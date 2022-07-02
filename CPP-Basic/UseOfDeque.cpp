#include<bits/stdc++.h>
using namespace std;

/*Double ended queue or Deque(part of C++ STL) are sequence containers with 
dynamic sizes that can be expanded or contracted on both ends 
(either its front or its back).
*/

// deque<data_type> variable_name;

int main()
{
    deque<int> myDeque; //creating a double ended queue/Deque

    myDeque = {1,2,3};
    cout<<"Size before push: "<<myDeque.size()<<endl;
    myDeque.push_back(4); // pushing 4 at the end of the deque
    myDeque.push_front(0); // pushing 0 at the front of the deque
    cout<<"Size after push: "<<myDeque.size()<<endl;
  
    for(int i=0; i<myDeque.size(); i++){
        cout<<myDeque[i]<<" "; //Printing myDeque's value
    }
    myDeque.pop_back(); // Poping 1 element from the end
    cout<<"\nSize after pop_back: "<<myDeque.size()<<endl;
    myDeque.pop_front(); // poping 1 element from the front
    cout<<"Size after pop_front: "<<myDeque.size()<<endl;

    cout<<"Deque array is empty(0) or not(1): "<<myDeque.empty()<<endl; // .empty() returns whtether the deque is empty(1 if empty) or not(0 if not empty)

    cout<<"First Elment: "<<myDeque.front()<<endl; // to get the front
    cout<<"Least Element: "<<myDeque.back()<<endl; // to get the back

    
} 