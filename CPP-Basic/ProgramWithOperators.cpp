#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Operators in C++"<<endl;
    cin>>a>>b;
    // Arithmetic Operator
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl; //1st prints a and then a=a+1
    cout<<"The value of a-- is "<<a--<<endl;  //1st prints a and then a=a-1
    cout<<"The value of ++a is "<<++a<<endl; //1st a=a+1 and then prints a
    cout<<"The value of  --a is "<<--a<<endl; //1st a=a-1 and then prints a

    // Assignment Operators --> Used to asign values to variables
    // int a=3, b=5;
    // char ch='d;

    //Comparison Operator
    cout<<"\n\nComparison Between a and b"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;

    // Logical Operator
    cout<<"\n\nLogical Operations: "<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}
