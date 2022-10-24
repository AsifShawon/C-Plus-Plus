#include<iostream>
using namespace std;
int main()
{
    int n, col, j=0;
    cout << "Enter size: ";
    cin >> n ;
    int a[n], b[n], c[n+n];

    cout << "Enter elements of a: ";
    for(int i=0; i<n; i++){
            cin >> a[i];
            c[j] = a[i];
            j++;
    }

    cout << "Enter elements of b: ";
    for(int i=0; i<n; i++){
            cin >> b[i];
            c[j] = b[i];
            j++;
    }
    
    int temp;
    for(int i=0; i< 2*n-1; i++){
        for(int j=0; j<2*n-i; j++){
            if(c[j]>c[j+1]){
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }

    cout << "\nAfter merging and sorting :";
    for(int i=0; i<2*n; i++){
        cout << c[i] << " ";
    }

    
}
