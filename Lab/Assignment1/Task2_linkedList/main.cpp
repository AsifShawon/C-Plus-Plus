#include <iostream>
#include "studentInfo.h"
#include<string>
using namespace std;

int main()
{
    studentInfo st;

     // Insert 5 student records
    st.InsertItem(13732, "Tyrion", 3.9);
    st.InsertItem(15234, "Jon", 2.6);
    st.InsertItem(13569, "Sandor", 1.2);
    st.InsertItem(15467, "Ramsey", 3.1);
    st.InsertItem(16285, "Arya", 3.1);

    st.DeleteItem(15467);

    // retrieve the id 13569
    int id = 13569;
    string name;
    float cgpa;
    bool found;
    st.RetrieveItem(id,name,cgpa,found);
    if(found) cout <<"Item is found\n"<< id << " " << name << " " << cgpa << endl;
    else cout << "Item not found" << endl;

    cout << endl;

    // Print the list
    st.Print();

    st.MakeEmpty();

    return 0;
}
