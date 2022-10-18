/*
Task 1: Using the new operator, allocate an integer array of user specified size (the user gives the size of the array as 
input). Assign values to the array elements by taking user inputs and then print the values. Finally de-allocate the array 
using the delete operator.
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    cout << "Enter array element: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Array element: ";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    delete []a;
    return 0;
}