#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include<string>
using namespace std;

const int MAX_ITEMS = 5;

class studentInfo
{
    struct info{
        int id;
        string name;
        double cgpa;
    };
public :
    studentInfo();
    ~studentInfo();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(int,string,double);
    void DeleteItem(int);
    void RetrieveItem(int&,string&,double&, bool&);
    void ResetList();
    void GetNextItem(int&, string&, double&);
    void Print();
private:
    int length;
    info data[MAX_ITEMS];
    int currentPos;
};

#endif // STUDENTINFO_H
