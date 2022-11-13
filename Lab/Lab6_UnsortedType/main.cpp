#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    // • Create a list of integers
    UnsortedType<int> u;

    // • Insert four items
    u.InsertItem(5);
    u.InsertItem(7);
    u.InsertItem(6);
    u.InsertItem(9);

   // u.InsertItemEnd(10);

    // • Print the list
    u.PrintList();

    cout << endl;

    //• Print the length of the list
    cout << u.LengthIs() << endl;

    // Insert one item
    u.InsertItem(1);

    // • Print the list without Print() function
    int item;
    for(int i=0; i<u.LengthIs(); i++){
        u.GetNextItem(item);
        cout << item << " ";
    }
    u.ResetList();
    cout << endl;

    bool found;
    // Retrieve 4 and print whether found or not
    item = 4;
    u.RetrieveItem(item,found);
    if(found) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    // Retrieve 5 and print whether found or not
    item = 5;
    u.RetrieveItem(item,found);
    if(found) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    // Retrieve 9 and print whether found or not
    item = 9;
    u.RetrieveItem(item,found);
    if(found) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    // Retrieve 10 and print whether found or not
    item = 10;
    u.RetrieveItem(item,found);
    if(found) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;


    // • Print if the list is full or not
    if(u.IsFull()) cout << "List is full\n";
    else cout << "List is not full\n";

    // Delete 5
    u.DeleteItem(5);

    // • Print if the list is full or not
    if(u.IsFull()) cout << "List is full\n";
    else cout << "List is not full\n";

    //• Delete 1
    u.DeleteItem(1);

    // • Print the list
    /* u.InsertItemEnd(11);
     u.InsertItemEnd(12);
     u.InsertItemEnd(13);*/
    u.PrintList();

    // empty the list
    u.~UnsortedType();

    return 0;
}
