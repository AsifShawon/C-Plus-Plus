#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        ll sum=0;
        int num;
        cin>>num;
        if(num==1) {
            cout<<"0\n";
            continue;
        }
        for(ll i=1; i*i<=num; i++){
            if(num%i==0){
                sum+=i;
                if(num/i!=i && num/i!=num){
                    sum += num/i;
                }
            }
        }
        cout<<sum<<endl;
    }
} 