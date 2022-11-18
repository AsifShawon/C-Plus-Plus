#include <iostream>
#include "SortedType.h"
#include "SortedType.cpp"

using namespace std;

int main()
{
    SortedType<int> List;

    cout << List.LengthIs() << endl;

    // insert 5 items
    List.InsertItem(5);
    List.InsertItem(7);
    List.InsertItem(4);
    List.InsertItem(2);
    List.InsertItem(1);

    int item;
    // print the list
    cout << "List: " ;
    for(int i=0; i<List.LengthIs(); i++){
        List.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    List.ResetList();

    bool found;
    // retrieve 6 and print whether found
    item = 6;
    List.RetrieveItem(item,found);
    if(found) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    // retrieve 5 and print whether found
    item = 5;
    List.RetrieveItem(item,found);
    if(found) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;


    // print if the list is full or not
    if(List.IsFull()) cout << "List is full" << endl;
    else cout << "List is not full" << endl;


    // delete 1
    List.DeleteItem(1);

    // print the list
    cout << "List: " ;
    for(int i=0; i<List.LengthIs(); i++){
        List.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    // print if the list is full or not
    if(List.IsFull()) cout << "List is full" << endl;
    else cout << "List is not full" << endl;

    List.~SortedType();

    return 0;
}
