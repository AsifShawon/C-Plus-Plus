#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        ll n,c=0;
        cin>>n;
        while(1){
            if(n%2==0){
                n = n/2;
                ++c;
            }
            if(n%3==0){
                n = (2*n)/3;
                ++c;
            }
            if(n%5==0){
                n = (4*n)/5;
                ++c;
            }
            if(n==1) break;
            if(n%2!=0&&n%3!=0&&n%5!=0){
                c=-1;
                break;
            }
        }
        cout<<c<<endl;
    }
}