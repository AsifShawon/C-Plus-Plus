#include<bits/stdc++.h>
using namespace std;

int isMod(string y, int a){
    int b=0,mod=y[0]-'0';
    for(int i=0; i<y.size()-1; i++){
        b = mod*10 + (y[i+1]-'0');
        mod = b%a;
    }
    return mod;
}

int main()
{
    string year;
    int ex = 0;
    while(cin>>year){
        if(ex==1)
            cout<<endl;
        int lpy = 0, hl = 0;
        ex = 0;
        
        if(isMod(year,400)==0 || (isMod(year,4)==0 && isMod(year,100)!=0)){
            cout<<"This is leap year."<<endl;
            lpy = 1;
            ex = 1;
        }
        if(isMod(year,15)==0){
            cout<<"This is huluculu festival year."<<endl;
            hl = 1;
            ex = 1;
        }
        if(lpy==1 && isMod(year,55)==0)
            cout<<"This is bulukulu festival year."<<endl;

        if(lpy==0 && hl==0) {
            cout<<"This is an ordinary year."<<endl;
            ex = 1;
        }
    }
}