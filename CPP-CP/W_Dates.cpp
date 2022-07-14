#include<bits/stdc++.h>
using namespace std;

int leapOrNot(int y){
    if(y%400==0 || (y%4==0 && y%100!=0))
        return 1;
    else return 0;
}

int main()
{
    int tc;
    cin>>tc;
    int c = 0;
    while(tc--){
        int yy=0,t=1,y,dd,d,k;
        string date,mm,m;
        cin>>date;
        cin>>k;
        for(int i=0; i<4; i++){
            yy = (date[i]-'0')+ yy*10;
        }
        dd = date[date.size()-1]-'0'+10*(date[date.size()-2]-'0');
        for(int i=5; i<date.size()-3; i++){
            mm += date[i];
        }

        string month[12] = {"January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November" ,"December"};
        int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int mi;

        for(int i=0; i<12; i++){
            if(month[i]==mm) {
                mi = i;
                break;
            }
        }
        int n = k;
        for(int i=1; i<=k; i++){
            
            if(leapOrNot(yy)==1) day[1]=29;
            else day[1] = 28;
            if(day[mi]>=dd) {
                dd++;
                n--;
            }
            if(day[mi]<dd){
                ++mi;
                if(mi>11) mi=0;
                dd = 1;
                
            if(mi==0 && dd==1) {++yy; }
            }


        }
        if(dd<10)
        cout<<"Case "<<(++c)<<": "<<yy<<"-"<<month[mi]<<"-0"<<dd<<endl;
        else cout<<"Case "<<(++c)<<": "<<yy<<"-"<<month[mi]<<"-"<<dd<<endl;
    }
}
