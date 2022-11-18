// task 2

#include <iostream>
#include "StudentInfo.h"

#include<string>
using namespace std;

int main()
{
    //Create a list of objects of class studentInfo
    studentInfo s;

    // Insert 5 student records
    s.InsertItem(15234, "Jon", 2.6);
    s.InsertItem(13732, "Tyrion", 3.9);
    s.InsertItem(13569, "Sandor", 1.2);
    s.InsertItem(15467, "Ramsey", 3.1);
    s.InsertItem(16285, "Arya", 3.1);

    // Delete the record with ID 15467
    s.DeleteItem(15467);

    // Retrieve the record with ID 13569 and print whether found or not along with the entire record.
    int id = 13569;
    string name;
    double cgpa;
    bool found;
    s.RetrieveItem(id,name,cgpa,found);
    if(found){
        cout << "Item is found\n";
        cout << id << ", " << name << ", " << cgpa << endl;
    }
    else cout << "Item is not found\n";

    cout << "\n";

    // print the list
    s.Print();
    s.MakeEmpty();
    return 0;
}
