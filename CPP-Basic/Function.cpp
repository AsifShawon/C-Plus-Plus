#include<iostream>
using namespace std;
//Creating a function
int sumOfTwo(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}

int main()
{
    int a,b;
    cout<<"Enter two number: ";
    cin>> a >> b;
    int sum = sumOfTwo(a,b); //calling the function and storing the return value

    cout<< "Sum of Two Number " << sum<<endl;
    return 0;
}
