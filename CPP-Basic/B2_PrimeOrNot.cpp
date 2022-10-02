#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool track = true;

    // normally
    /* for(int i=2; i<n; i++){
        if(n%i==0) {
            cout << n << " is not a prime";
            track = false;
            break;
        }
    }
    if(track) cout << n << " is a prime"; */

    // by running loop upto square root

    for(int i=2; i*i<=n; i++){ // sqrt(n) = i => i^2 = n => i*i =n
        if(n%i==0){
            cout << n << " is not a prime";
            track = false;
            break;
        }
    }
    if(track) cout << n << " is a prime";
}