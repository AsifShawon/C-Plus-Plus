#include<bits/stdc++.h>
using namespace std;

/*
pythogorean triples means three positive integer (a,b,c) that meet the condition
    a^2 = b^2 + c^2
*/

bool isPythogoreanTriple(int x,int y,int z){
    
    int a = max(x,max(y,z));
    int b,c;

    if(a==x){b=y;c=z;}
    else if(a==y){b=x;c=z;}
    else {b=x;c=y;}

    return (a*a==b*b+c*c);
}

int main()
{
    int x,y,z;
    cin >> x >> y >> z;

    if(isPythogoreanTriple(x,y,z)) cout << "pythogorean triples";
    else cout << "Not pythogorean triples";
}