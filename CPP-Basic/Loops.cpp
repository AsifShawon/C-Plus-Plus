#include<iostream>
using namespace std;
int main()
{
    //While Loops
    int index = 1;
    while(index<10)
    {
        cout << "We are at "<<index<<endl;
        index++;
    }
    cout<<"\n";
    // for loop
    for(int i=1; i<5; i++)
        cout << i <<"\n";

    cout<<"\n";
    //do while
    index = 0;
    do
    {
        cout<<index<<"\n";
        index++;
    }
    while(index!=3);
}



