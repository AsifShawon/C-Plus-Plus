#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    ll c = 0;
    vector<ll> f,b;
    for (ll int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            f.push_back(i);
            if (n / i != i)
            {
                f.push_back(n/i);
            }
        }
    }
    sort(f.begin(),f.end());
    
    if(f.size()<k) cout<<"-1";
    else cout<<f[k-1];
}