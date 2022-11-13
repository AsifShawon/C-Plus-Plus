#include <iostream>
#include "SortedListType.h"
#include "SortedListType.cpp"
using namespace std;

int main()
{
    // • Create a list of integers
    SortedListType<int> s;

    // • Print length of the list
    cout << s.LengthIs() << endl;

    // • Insert five items - 5 7 4 2 1
    s.InsertItem(5);
    s.InsertItem(7);
    s.InsertItem(4);
    s.InsertItem(2);
    s.InsertItem(1);

    // •Print the list
    s.Print();

    // • Retrieve 6 and print whether found
    int item = 6;
    bool found;
    s.RetrieveItem(item,found);
    if(found) cout << "Item is found\n";
    else cout << "Item is not found\n";

    // • Retrieve 5 and print whether found
    item = 5;
    s.RetrieveItem(item,found);
    if(found) cout << "Item is found\n";
    else cout << "Item is not found\n";

    // • Print if the list is full or not
    if(s.IsFull()) cout << "List is full\n";
    else cout << "List is not full\n";

    // • Delete 1
    s.DeleteItem(1);

    // • Print the list without Print()
    cout << "List: ";
    for(int i=0; i<s.LengthIs(); i++){
        s.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    // • Print if the list is full or not
    if(s.IsFull()) cout << "List is full\n";
    else cout << "List is not full\n";

    s.MakeEmpty();

    return 0;
}
