#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    dynArr d;
    dynArr d2(5);

    int v;
    cout << "Enter 5 number: ";
    for(int i=0; i<5; i++){
        cin >> v;
        d2.setValue(i,v);
    }

    cout << "Array elements: ";
    for(int i=0; i<5; i++){
        cout << d2.getValue(i) << " ";
    }

    int n;
    cout << "\nEnter new size: ";
    cin >> n;
    d2.allocate(n);
    for(int i=0; i<n; i++){
            cin >> v;
        d2.setValue(i,v);
    }

    cout << "Array elements: ";
    for(int i=0; i<n; i++){
        cout << d2.getValue(i) << " ";
    }

    d.~dynArr();
    d2.~dynArr();

    return 0;
}
