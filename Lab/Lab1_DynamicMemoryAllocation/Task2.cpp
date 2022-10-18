/*
Task  2:  Using the new operator, allocate a two dimensional character array. Again the number of rows and columns 
are going to be provided by the user as input. All of the rows are the same size. Take character strings as input from 
the user and then print the strings. Finally de-allocate the array using the delete operator. 
*/

#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    char **ch = new char*[row];
    for(int i=0;i<row; i++){
        ch[i] = new char[col];
    }

    cout << "Enter characters: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> ch[i][j];
        }
    }

    cout << "Strings \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << ch[i][j];
        }
        cout << "\n";
    }

    for(int i=0; i<row; i++){
        delete []ch[i];
    }

    delete []ch;
 return 0;
}