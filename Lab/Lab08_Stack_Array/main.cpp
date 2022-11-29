#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
#include<string>
using namespace std;

int main()
{
    // Create a stack of integers
    StackType<int> st;

    //  Check if the stack is empty
    if(st.IsEmpty()) cout << "Stack is empty\n";
    else cout << "Stack is not empty\n";

    // Push four items
    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);

    // Check if the stack is empty
    if(st.IsEmpty()) cout << "Stack is empty\n";
    else cout << "Stack is not empty\n";

    // Check if the stack is full
    if(st.IsFull()) cout << "Stack is full\n";
    cout << "Stack is not full\n";

    // Print the values in the stack (in the order the values are given as input)
    StackType<int> st2;

    while(!st.IsEmpty()){
        st2.Push(st.Top());
        st.Pop();
    }

    while(!st2.IsEmpty()){
        cout << st2.Top() << " ";
        st.Push(st2.Top());
        st2.Pop();
    }

    cout << endl;

    // Push another item
    st.Push(3);

    // Print the values in the stack
    while(!st.IsEmpty()){
        st2.Push(st.Top());
        st.Pop();
    }

    while(!st2.IsEmpty()){
        cout << st2.Top() << " ";
        st.Push(st2.Top());
        st2.Pop();
    }

    cout << endl;

    // check if the stack is full
    if(st.IsFull()) cout << "Stack is full\n";
    cout << "Stack is not full\n";

    // pop two items
    st.Pop();
    st.Pop();

    // print top items
    cout << st.Top() << endl;


    // task 2
    StackType<char> char_stack;
    string s;
    cin >> s;

    if(char_stack.isBalanace(s)) cout << "Balanced\n";
    else cout << "Not Balanced\n";

    return 0;
}
