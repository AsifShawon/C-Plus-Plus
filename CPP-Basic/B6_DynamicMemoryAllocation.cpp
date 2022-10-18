#include <iostream>

using namespace std;

int main()
{
    //Dynamic memory allocation

    // we will use "new" operator to allocate pointer
    // we will use "delete" operator to deallocate pointer

    /**
    pointer = new DataType;
    pointer = new DataType [SIZE(int)];

    // Example
    int *a = new int;
    char *ch = new char[5]; // array of character -> size 5
    double **d = new double*[10]; // 2D array -> row size is 10
    // column size is 10 in default; but we can declare column size individually

    delete a;
    delete [] ch;
    delete [] d;
    */

/*
    int *a = new int[5];
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    cout << "Array elements: ";
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }

    delete []a;
    */


    int row = 3,col = 3;
    int **arr = new int*[row];

    for(int i=0; i<col; i++){
        arr[i] = new int[col]; // allocating address for every row's column
    }


    cout<< "Enter array Elements: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    for(int i=0; i<col; i++){
        delete[] arr[i]; // deallocating every row address
        //or deleting inner array
    }
    delete[] arr; // deallocating the array

    return 0;
}
