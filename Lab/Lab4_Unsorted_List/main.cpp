#include <iostream>
#include"unsortedtype.h"
#include"src/unsortedtype.cpp"

using namespace std;

int main()
{
    // 1- Create a list of integers
    UnsortedType<int> u;

    // 2- Insert four items
    u.InsertItem(5);
    u.InsertItem(7);
    u.InsertItem(6);
    u.InsertItem(9);

    // 3- Print the list
    u.Print();

    // 4- Print the length of the list
    cout << "Length of list: " << u.LengthIs() << endl;

    // 5- Insert one item
    u.InsertItem(1);

    int item;

    // 6- Print the list without Print() function
    cout << "The items are: " ;
    for(int i=0; i<u.LengthIs(); i++)
    {
        u.GetNextItem(item);
        cout << item << " ";
    }
    u.ResetList(); // if we want to print the list again with GetNextItem() function
    cout << endl;

    bool found;

    // 7- Retrieve 4 and print whether found or not
    item = 4;
    u.RetrieveItem(item, found);
    if(found) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    // 8- Retrieve 5 and print whether found or not
    item = 5;
    u.RetrieveItem(item, found);
    if(found) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    // 9- Retrieve 9 and print whether found or not
    item = 9;
    u.RetrieveItem(item, found);
    if(found) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    // 10- Retrieve 10 and print whether found or not
    item = 10;
    u.RetrieveItem(item, found);
    if(found) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    // 11- Print if the list is full or not
    if(u.IsFull()) cout << "List is full\n";
    else cout << "List is not full";

    // 12- Delete 5
    u.DeleteItem(5);

    // 13- Print if the list is full or not
    if(u.IsFull()) cout << "List is full\n";
    else cout << "List is not full";

    // 14- Delete 1
    u.DeleteItem(1);

    // 15- Print the list
    u.Print();

    // 16- Delete 6
    u.DeleteItem(6);

    // 17- Print the list
    u.Print();

    // make the list empty
    u.MakeEmpty();

    return 0;
}
