#include<iostream>
using namespace std;

int main()
{
    int sum = 0, t, a=0 ;
    cout << "Enter terms: ";
    cin >> t;
    for(int i=0; i<t; i++){
        a = a*10+1;
        sum += a;
        if(t-1==i){
            cout << a ;
            break;
        }
        cout << a << "+";
    }

    cout << "\nThe Sum is: " << sum;

    return 0;
}
