#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        int round=0,term = 1, temp = n, count=0;
        vector<int> r;
        while(temp!=0){
            round = temp%10*term;
            temp /= 10;
            term *= 10;
            if(round!=0) {
                ++count;
                r.push_back(round);
            }
        }
        cout<<count<<endl;
        for(int i=0; i<r.size(); i++){
            cout<<r[i]<<" ";
        }
        cout<<endl;
    }
}