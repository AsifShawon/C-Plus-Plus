#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
    data = NULL;
    row_size = col_size = 0;
}

dynArr::dynArr(int row, int col)
{
    data = new int*[row];
    row_size = row;
    col_size = col;
    for(int i=0; i<row_size; i++)
    {
        data[i] = new int[col];
    }
}

dynArr::~dynArr()
{
    for(int i=0; i<row_size; i++)
    {
        delete[] data[i];
    }
    delete [] data;
}

int dynArr::getValue(int row_index, int col_index)
{
    return data[row_index][col_index];
}

void dynArr::setValue(int row_index, int col_index, int value)
{
    data[row_index][col_index] = value;
}

void dynArr::allocate(int row, int col)
{
    /*
    int* b = new int[size];
    for(int i=0; i<size; i++){
        b[i] = data[i];
    }
    */

    this->~dynArr();

    row_size = row;
    col_size = col;

    data = new int*[row_size];

    for(int i=0; i<col_size; i++){
        data[i] = new int[col_size];
    }

    /*
    for(int i=0; i<size; i++){
        data[i] = b[i];
    }
    delete[] b;
    */
}
