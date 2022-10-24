/*
3. Write a program that will keep taking inputs from the user until the user inputs -1. Finally 
display the all numbers and also display all numbers excludes the odd number and find 
the sum of them.
*/


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int* a = new int[0];
    int* b = new int[0];

    int v,i=0,k=1;
    cout << "Enter array elements(\"-1\" to end): \n";

    while(1){
        cin >> v;
        if(v==-1) break;

        delete [] b; // deleting previously allocated memory
        b = new int[k];

        // copying a to b
        for(int j=0; j<i; j++){
            b[j] = a[j];
        }
        b[i] = v;
        i++;
        k++;
        delete [] a;
        a = new int[k];
        
        // copying b to a
       for(int j=0; j<i; j++){
            a[j] = b[j];
            
        }
    }

    cout << "Array elements: ";
    for(int j=0; j<i; j++){
        cout << a[j] << " ";
    }

    int sum=0;
    cout << "\nEven numbers: ";
    for(int j=0; j<i; j++){
        if(a[j]%2==0){
            cout << a[j] << " ";
            sum += a[j];
        }
    }
    
    cout << "\nSum of even numbers: " << sum;

    delete [] a;
    delete [] b;
    return 0;
}

    /*
    vector<int> arr;
    while(1){
        cin >> v;
        if(v==-1) break;
        arr.push_back(v);
    }
    
    for(int ii=0; ii<arr.size(); ii++){
        cout << arr[ii] << " ";
    }*/