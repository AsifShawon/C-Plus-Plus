#include <iostream>
#include "Matrix.h"
#include "src/Matrix.cpp"

using namespace std;

int main()
{
    Matrix<int> arr(3,3);

    int value;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> value;
            arr.setValue(i,j,value);
        }
    }

    cout << "Matrix: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr.getValue(i,j) << " ";
        }
        cout << "\n";
    }

    arr.~Matrix();
}
