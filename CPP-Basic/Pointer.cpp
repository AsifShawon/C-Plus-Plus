#include<iostream>
using namespace std;
void changeValue(int *p);
int main()
{
    int n;
    n = 5;
    // using address operator -> "&"
    // cout << "Address of " << n << " is " << &n << "\n";

    // creating a pointer 
    int *ptr = &n; // ptr will store address of "n"

    // printing the value of pointer
    cout << "Address of " << n << " is " << ptr << "\n"; // sizeof any pointer is 8
    cout << *ptr << "\n"; // *pointer_name means derefrence operator


    // normally
    n = 10;
    int a = n;
    cout << "before changing a : " << n << "\n";
    a++;
    cout << "after changing a : " << n << "\n";

    // using pointer
    int *p = NULL;
    p = &n;
    cout << "before changing *p : " << n << "\n";
    (*p)++;
    cout << "after changing *p : " << n << "\n";

    // normally if we pass a value in function(return type void) and change it, it won't change
    // in main function
    // but if we pass a pointer(address of this value) then we can change the main value

    n = 15;
    cout << "Before changing n: " << n << "\n";
    changeValue(&n); // passing address of n
    cout << "After changing n: " << n << "\n";

}

void changeValue(int *p){
    int b;
    cin >> b;
    p = &b; // changing value of the pointer
}