/*
Task 3: Using the new operator, allocate a two dimensional integer array. The number of rows and columns are going 
to be provided by the user as input. However, in this task, all of the rows are not the same size (the array is uneven). 
The user will specify how many elements the individual rows will have. Assign values to the array elements by taking 
user inputs and then print the values. Finally de-allocate the array using the delete operator.
*/

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter row: ";
    cin >> row;
    int **arr = new int*[row];
    int col[row];

    for(int i=0; i<row; i++){
        cout << "Enter column size of row "<<(i+1)<<": ";
        cin >> col[i];
        arr[i] = new int[col[i]];
        for(int j=0; j<col[i]; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Array elements: \n";

    for(int i=0; i<row; i++){
        for(int j=0; j<col[i]; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    for(int i=0; i<row; i++){
        delete []arr[i];
    }

    delete []arr;

    return 0;
}
