#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    
    // if(b==0){
    //     cout<<(a+1);
    //     return 0;
    // }

    int pos = a;
    int b1 = abs(b);
    while(b1>n){
        b1 = b1%n;
    }
    
    if(b<0){
        for(int i=0; i<b1; i++){
            --pos;
            if(pos==0) pos = n;
        }
    }
    else{
        for(int i=0; i<b1; i++){
            ++pos;
            if(pos>n) pos = 1;
        }
    }
    cout<<pos;
}