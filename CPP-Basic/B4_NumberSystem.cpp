#include<bits/stdc++.h>
using namespace std;

int xToDecimal(string num, int base){
    int ans=0, temp;
    stringstream s;
    if(base==16){
        int j=num.length()-1;
        
        for(int i=0; i<num.length(); i++){
            if(num[i]=='A') ans += 10*pow(16,j);
            else if(num[i]=='B') ans += 11*pow(16,j);
            else if(num[i]=='C') ans += 12*pow(16,j);
            else if(num[i]=='D') ans += 13*pow(16,j);
            else if(num[i]=='E') ans += 14*pow(16,j);
            else if(num[i]=='F') ans += 15*pow(16,j);
            else if(num[i]=='1') ans += 1*pow(16,j);
            else if(num[i]=='2') ans += 2*pow(16,j);
            else if(num[i]=='3') ans += 3*pow(16,j);
            else if(num[i]=='4') ans += 4*pow(16,j);
            else if(num[i]=='5') ans += 5*pow(16,j);
            else if(num[i]=='6') ans += 6*pow(16,j);
            else if(num[i]=='7') ans += 7*pow(16,j);
            else if(num[i]=='8') ans += 8*pow(16,j);
            else if(num[i]=='9') ans += 9*pow(16,j);
            j--;
        }
    }

    return ans;
}

int xToDecimal(int num, int base){
    
}

int main()
{
    int base, num;
    string strNum;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the number: ";
    if(base==16) cin >> strNum;
    else cin >> num;

    cout << xToDecimal(strNum,base);
}