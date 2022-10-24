#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    int r,c;
    cout << "Enter row and column: ";
    cin >> r >> c;

    dynArr d(r,c);

    int value;
    cout << "Enter array elements: ";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
                cin >> value;
                d.setValue(i,j,value);
        }
    }

    cout << "\n 2D Array: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
                cout << d.getValue(i,j) << " ";
        }
        cout << "\n";
    }

    d.~dynArr();

    return 0;
}
