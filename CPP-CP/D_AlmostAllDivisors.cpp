#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int q;
    cin >> q;
    while(q--){
        ll n,el;
        cin>>n;
        vector<ll> a,b;
        string s1,s2;
        for(int i=0; i<n; i++){
            cin>>el;
            a.push_back(el);
        }
        
        sort(a.begin(),a.end());
        ll num = a[n-1]*a[0];
        for(ll i=0; i<n; i++){
            s1 += to_string(a[i]);
        }
        for(ll i=2; i*1LL*i<=num; i++){
            if(num%i==0){
                b.push_back(i);
                if(num/i!=i){
                    b.push_back(num/i);
                }
            }
        }
        sort(b.begin(),b.end());
        for(ll i=0; i<b.size(); i++){
            s2+=to_string(b[i]);
        }
        if(s1==s2) cout<<num<<endl;
        else cout<<"-1"<<endl;
    }
}