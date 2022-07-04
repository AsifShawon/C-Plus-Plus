#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2; i*1LL*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    map<char,int> mp;
    char ch = 'a';
    for(int i=1; i<=26; i++)  {
        mp.insert({ch,i});
        ch++;
    }
    ch = 'A';
    for(int i=27; i<=52; i++)  {
        mp.insert({ch,i});
        ch++;
    }
    
    string s;
    int n=0;
    while(cin>>s){
        n=0;
        for(int i=0; i<s.size(); i++)
            n+=mp[s[i]];
        
        if(isPrime(n)) cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word."<<endl;
    }

} 
