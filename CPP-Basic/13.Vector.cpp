//Vector
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v) //a function to display vector
//"&v" is to take vec1 vector array
{
    for(int i=0; i<v.size(); i++) //size() = to determine size of v
        cout<<v[i]<<" ";
}
int main()
{
    //vector
    /*
    Vectors are the same as dynamic arrays with the ability to resize
    itself automatically when an element is inserted or deleted, with their
    storage being handled automatically by the container.
    */

    // syntax =>  "vector<data_type> variable_name; "

    // declaring a vector
    vector<int> vec1;

    // storing in vector
    int element,n;
    cout<<"How Many Numbers you want to input: ";
    cin>>n;
    cout<<"Enter numbers: ";
    for(int i=0; i<n; i++){
            cin >> element;
                vec1.push_back(element);  // push_back(input_element) to input value in vector
    }
    cout<<"Vector array: ";
    display(vec1);

    //sorting a vector
    sort(vec1.begin(),vec1.end());
    cout<<"\nAfter sorting: ";
    display(vec1);
    return 0;

}
