#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n, cnt = 0;
        cin>>n;
        for(int i=1; i*1LL*i<=n; i++){
            if(n%i==0){
                if(i%2==0)  ++cnt;
                if(n/i!=i && (n/i)%2==0)  ++cnt;
            }
        }
        cout<<cnt<<endl;
    }
}