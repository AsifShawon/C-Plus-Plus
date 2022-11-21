#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include<string>

using namespace std;
class studentInfo
{
    struct NodeType
    {
        int id;
        string name;
        float cgpa;
        NodeType* next;
    };
public:
    studentInfo();
    ~studentInfo();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(int&,string&,float&, bool&);
    void InsertItem(int,string,float);
    void DeleteItem(int);
    void ResetList();
    void GetNextItem(int&,string&,float&);
    void Print();
private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};

#endif // STUDENTINFO_H
