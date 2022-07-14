#include<bits/stdc++.h>
using namespace std;

int isDiv(string a, int b){
    int t=0;
    if(a[t]=='-') t++;
    long long mod=0;
    for(int i=t; i<a.size(); i++){
        mod = mod*10 + (a[i]-'0');
        mod = mod%b;
    }
    return mod;
}

int main()
{
    int tc;
    cin>>tc;
    int c=0;
    while(tc--){
        string s;
        int a;
        cin>>s>>a;
        if(isDiv(s,a)==0) {
            cout<<"Case "<<(++c)<<": divisible\n";
        }
        else cout<<"Case "<<(++c)<<": not divisible\n";
    }
}