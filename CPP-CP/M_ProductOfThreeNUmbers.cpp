#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    for(int i=2; i*1LL*i<=n; i++){
        if(n%i == 0) return 1;
    }
    return 0;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;

        if(n==2) {cout<<"NO\n"; continue;}
        if(isPrime(n)==0){
            cout<<"NO\n"; 
            continue;
        }
    
        int i=2;
        int m[3]={0,0,0},c=0,j=0;
        string ans = "YES";

        for(int i=2; i*1LL*i<=n; i++){
            if(n%i == 0){
                m[0] = i;
                break;
            }
        }

        n = n/m[0];

        for(int i=m[0]+1; i*1LL*i<=n; i++){
            if(n%i == 0){
                m[1] = i;
                if(n/i != i) {
                    m[2] = n/i;
                    c = 1;
                    break;
                }
                
            }
        }
        
        if(m[0]==0||m[1]==0||m[2]==0) {cout<<"NO\n"; continue;}

        cout<<ans<<endl;
        for(auto x:m)
            cout<<x<<" ";
        cout<<endl;
    }
}