#include<bits/stdc++.h>
using namespace std;
int main()
{
    int yen;
    cin>>yen;
    int ty=0, c=0;
    while(ty<yen){
        ++c;
        ty+=c;
    }
    cout<<c;
}