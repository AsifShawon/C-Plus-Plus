#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}
dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}
dynArr::~dynArr()
{
    delete [] data;
}
int dynArr::getValue(int index)
{
    return data[index];
}
void dynArr::setValue(int index, int value)
{
    data[index] = value;
}
void dynArr::allocate(int s)
{
    /*
    int* b = new int[size];
    for(int i=0; i<size; i++){
        b[i] = data[i];
    }
    */
    this->~dynArr();
    data = new int[s];
    size = s;
    /*
    for(int i=0; i<size; i++){
        data[i] = b[i];
    }
    delete[] b;
    */
}
