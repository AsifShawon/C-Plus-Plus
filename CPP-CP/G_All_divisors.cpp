#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> f;
    vector<int> s;
    cin>>n;
    for(int i=1; i*1LL*i<=n; i++){
        if(n%i==0){
            f.push_back(i);
            if(n/i!=i){
                s.push_back(n/i);
            }
        }
    }
        for(int i = s.size()-1; i>=0; i--){
            f.push_back(s[i]);
        }
        for(int x : f){
            cout<<x<<" ";
        }
}