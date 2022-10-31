#include <iostream>
#include "complex.h"
#include "complex.cpp"
using namespace std;

int main()
{
    Complex c1(2.0,3.0), c2(1.5,2.5), c3;

    c3 = c1 + c2;
    c3.Print();
    
    c3 = c1*c2;
    c3.Print();

    bool a =  c1!=c2;
    if(a) cout << "Equal";
    else cout << "Not Equal";

    return 0;
}
