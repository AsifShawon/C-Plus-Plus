#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool isEmprip(int n){
    int rev=0, temp=n;
    while(temp!=0){
        rev = rev*10 + temp%10;
        temp/=10;
    }
    if(isPrime(rev) && rev!=n)
        return true;
    else return false;
}

int main()
{
    int v;
    while(cin>>v){
        if(isPrime(v)){
            if(isEmprip(v)){
                cout<<v<<" is emirp.\n";
            }
            else cout<<v<<" is prime.\n";
        }
        else cout<<v<<" is not prime.\n";
    }
} 