#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"

using namespace std;


void addItem(TreeType<int>& t2,int a[], int s, int e)
{
    if(s>e) return;

    int mid =(s+e)/2;

    t2.InsertItem(a[mid]);

    addItem(t2,a,s,(mid-1)); // left sub tree
    addItem(t2,a,(mid+1),e); // right sub tree
}

int main()
{
    TreeType<int> t;

    if(t.IsEmpty()) cout << "Empty\n";
    else cout << "Not empty\n";

    t.InsertItem(4);
    t.InsertItem(9);
    t.InsertItem(2);
    t.InsertItem(7);
    t.InsertItem(3);
    t.InsertItem(11);
    t.InsertItem(17);
    t.InsertItem(0);
    t.InsertItem(5);
    t.InsertItem(1);

    if(t.IsEmpty()) cout << "Empty\n";
    else cout << "Not empty\n";

    cout << t.LengthIs() << endl;

    int item = 9;
    bool found;
    t.RetrieveItem(item,found);
    if(found) cout << "Item is found\n";
    else cout << "Item is not found\n";

    item = 13;
    t.RetrieveItem(item,found);
    if(found) cout << "Item is found\n";
    else cout << "Item is not found\n";

    // in-order print
    bool finished=false;
    t.ResetTree(IN_ORDER);
    while(!finished){
            item = 0;
        t.GetNextItem(item,IN_ORDER,finished);
        cout << item << " ";
    }
    cout << endl;

    // preorder
    finished=false;
    t.ResetTree(PRE_ORDER);
    while(!finished){
            item = 0;
        t.GetNextItem(item,PRE_ORDER,finished);
        cout << item << " ";
    }
    cout << endl;

    // postorder
    finished=false;
    t.ResetTree(POST_ORDER);
    while(!finished){
            item = 0;
        t.GetNextItem(item,POST_ORDER,finished);
        cout << item << " ";
    }
    cout << endl;

    t.MakeEmpty();

    // task 2

    TreeType<int> t1;

    t1.InsertItem(11);
    t1.InsertItem(9);
    t1.InsertItem(4);
    t1.InsertItem(2);
    t1.InsertItem(7);
    t1.InsertItem(3);
    t1.InsertItem(17);
    t1.InsertItem(0);
    t1.InsertItem(5);
    t1.InsertItem(1);

    int a[t1.LengthIs()];
    finished=false;
    t1.ResetTree(IN_ORDER);
    int i=0;
    while(!finished){
            item = 0;
        t1.GetNextItem(item,IN_ORDER,finished);
        a[i++] = item;
    }

    int s1 = 0, e1 = t1.LengthIs();
    cout << "Length: "<< e1 << endl;

    TreeType<int> t2;
    addItem(t2,a,s1,e1-1);
    finished=false;
    t2.ResetTree(PRE_ORDER);
    while(!finished){
            item = 0;
        t2.GetNextItem(item,PRE_ORDER,finished);
        cout << item << " ";
    }
    cout << endl;


    return 0;
}
