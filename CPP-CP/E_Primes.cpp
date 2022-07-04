#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2; i*1LL*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=2; i*1LL*i<n; i++){
            if(isPrime(i)&&isPrime(n-i)){
                cout<<i<<" "<<(n-i);
                return 0;
            }
    }
    cout<<"-1";
}