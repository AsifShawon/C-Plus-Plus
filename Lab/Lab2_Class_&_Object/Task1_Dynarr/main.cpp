#include<iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    dynArr dyn1; // a object of dynArr with void parameter

    dynArr dyn(5); // dyn(5) means we create a object of dynArr and pass a int parameter to the constructor

    int val;
    cout << "Enter 5 number: ";
    for(int i=0; i<5; i++){
            cin >> val;
        dyn.setValue(i,val);
    }

    cout << "Your numbers: ";
    for(int i=0; i<5; i++){
        cout << dyn.getValue(i) << " ";
    }

    dyn1.~dynArr();
    dyn.~dynArr();
}
