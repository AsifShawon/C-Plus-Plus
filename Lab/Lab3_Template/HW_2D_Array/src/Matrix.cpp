#include "Matrix.h"
#include<iostream>
template<class T>
Matrix<T>::Matrix(int row, int col)
{
    row_size = row;
    col_size = col;
    data = new T*[row_size];
    for(int i=0; i<row_size; i++){
        data[i] = new T[col_size];
    }
}

template<class T>
Matrix<T>::~Matrix()
{
    for(int i=0; i<row_size; i++){
        delete[] data[i];
    }
    delete[] data;
}

template<class T>
void Matrix<T>:: setValue(int row, int col, T value)
{
    data[row][col] = value;
}

template<class T>
T Matrix<T>:: getValue(int row, int col)
{
    return data[row][col];
}
