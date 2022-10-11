#include<iostream>
using namespace std;

// creating a class "Employee"
class Employee{
    private: // can be accessed by only in this class
        int a,b,c;

    public: // can be accessed out of the class
        int d,e;
        void setData(int a,int b,int c); // declaration
        void getData(){ 
            cout << "A = " << a <<"\n";
            cout << "B = " << b <<"\n";
            cout << "C = " << c <<"\n";
            cout << "D = " << d <<"\n";
            cout << "E = " << e <<"\n";
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee data;
    data.setData(1,2,3);
    data.d = 4;
    data.e = 5;
    data.getData();

    return 0;
}