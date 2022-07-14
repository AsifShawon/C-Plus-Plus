#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main()
{
    ll A,B,C;
    cin>>A>>B>>C;
    
    A = (A*(A+1))/2;
    B = (B*(B+1))/2;
    C = (C*(C+1))/2;

    ll ans = ((((A%mod)*(B%mod))%mod)*(C%mod))%mod;

    cout<<ans;
}