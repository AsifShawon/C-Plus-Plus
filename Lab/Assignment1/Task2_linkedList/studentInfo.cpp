#include "studentInfo.h"
#include <iostream>
#include <string>
using namespace std;

studentInfo::studentInfo()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

int studentInfo::LengthIs()
{
    return length;
}

bool studentInfo::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

void studentInfo::RetrieveItem(int& id1,string& name1,float& cgpa1, bool& found)
{
    NodeType* location = listData;
    bool moreToSearch = (location != NULL);
    found = false;
    while (moreToSearch && !found)
    {
        if (id1== location->id)
            found = true;
        else if (id1> location->id)
        {
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else
            moreToSearch = false;
    }

    name1 = location->name;
    cgpa1 = location->cgpa;
}

void studentInfo::MakeEmpty()
{
    NodeType* tempPtr;
    while (listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

void studentInfo::InsertItem(int id1,string name1,float cgpa1)
{
    NodeType* newNode;
    NodeType* predLoc;
    NodeType* location;
    bool moreToSearch;
    location = listData;
    predLoc = NULL;
    moreToSearch = (location != NULL);
    while (moreToSearch)
    {
        if (location->id < id1)
        {
            predLoc = location;
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else moreToSearch = false;
    }
    newNode = new NodeType;
    newNode->id = id1;
    newNode->name = name1;
    newNode->cgpa = cgpa1;
    if (predLoc == NULL)
    {
        newNode->next = listData;
        listData = newNode;
    }

    else
    {
        newNode->next = location;
        predLoc->next = newNode;
    }
    length++;
}

void studentInfo::DeleteItem(int id1)
{
    NodeType* location = listData;
    NodeType* tempLocation;
    if (id1 == listData->id)
    {
        tempLocation = location;
        listData = listData->next;
    }
    else
    {
        while (!(id1==(location->next)->id))
            location = location->next;
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}

studentInfo::~studentInfo()
{
    MakeEmpty();
}

void studentInfo::ResetList()
{
    currentPos = NULL;
}

void studentInfo::GetNextItem(int& id1,string& name1,float& cgpa1)
{
    if (currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    id1 = currentPos->id;
    name1 = currentPos->name;
    cgpa1 = currentPos->cgpa;
}

void studentInfo::Print()
{
    NodeType* loc = new NodeType;
    loc = listData;
    while(loc != NULL){
        cout << loc->id << " " << loc->name << " " << loc->cgpa << endl;
        loc = loc->next;
    }
}
