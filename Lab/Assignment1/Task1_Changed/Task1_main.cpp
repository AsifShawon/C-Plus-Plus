// Task 1

#include <iostream>
#include "UnsortedType1.h"
#include "UnsortedType1.cpp"
using namespace std;

int main()
{
    UnsortedType<int> List1;
    UnsortedType<int> List2;
    UnsortedType<int> List;

    cout << "Input values:\n";
    int m,n;
    cin >> m;
    int a;
    for(int i=0; i<m; i++){
        cin >> a;
        List1.InsertItem(a);
    }

    cin >> n;
    int b;
    for(int i=0; i<n; i++){
        cin >> b;
        List2.InsertItem(b);
    }

    List1.GetNextItem(a);
    List2.GetNextItem(b);

    int len = m+n;
    int j = m, k=n;
    for(int i=1; i<=len; i++){
       if(a>b){
            List.InsertItem(a);
            j--;
            if(j>0)
                List1.GetNextItem(a);
            else break;
        }
        else {
            List.InsertItem(b);
            k--;
            if(k>0)
                List2.GetNextItem(b);
            else break;
        }
    }

    if(j>0){
        while(j--){
        List.InsertItem(a);
        if(j>0)
        List1.GetNextItem(a);
        }
    }
    else{
       while(k--){
            List.InsertItem(b);
            if(k>0)
            List2.GetNextItem(b);
        }
    }

    cout << "Sorted elements: ";
    List.PrintList();

    List.MakeEmpty();
}
