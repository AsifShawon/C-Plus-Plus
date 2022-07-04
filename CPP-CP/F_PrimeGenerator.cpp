#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2; i*1LL*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int m,n;
        cin>>m>>n;
        for(int i=m; i<=n; i++){
            if(i!=1 && isPrime(i)) cout<<i<<endl;
        }
        cout<<endl;
    }
}