#include "StudentInfo.h"
#include<iostream>
#include<string>
using namespace std;

studentInfo::studentInfo()
{
    length = 0;
    currentPos = -1;
}

studentInfo::~studentInfo()
{
    MakeEmpty();
}

void studentInfo::MakeEmpty()
{
    length = 0;
    currentPos = -1;
}

bool studentInfo::IsFull()
{
    return length==MAX_ITEMS;
}

int studentInfo::LengthIs()
{
    return length;
}

void studentInfo::InsertItem(int id1, string name1, double cgpa1)
{
    if(length>=MAX_ITEMS) return;

    int loc = 0;

    while(loc<length && data[loc].id<id1)
        loc++;

    for(int i=length; i>loc; i--){
        data[i].id = data[i-1].id;
        data[i].name = data[i-1].name;
        data[i].cgpa = data[i-1].cgpa;
    }

    data[loc].id = id1;
    data[loc].name = name1;
    data[loc].cgpa = cgpa1;
    length++;
}

void studentInfo::DeleteItem(int id1)
{
    if(length==0) return;

    int loc;
    for(int i=0; i<length; i++){
        if(id1==data[i].id){
            loc = i;
            break;
        }
    }

    for(int i=loc; i<length-1; i++){
        data[i].id = data[i+1].id;
        data[i].name = data[i+1].name;
        data[i].cgpa = data[i+1].cgpa;
    }
    length--;
}

void studentInfo::RetrieveItem(int& id1,string& name1, double& cgpa1, bool& found)
{
    found = false;
    if(length==0) return;
    int beg = 0, end = length-1;
    int mid = (int)((beg+end)/2);

    while(beg<=end && id1 != data[mid].id){
        if(id1<data[mid].id) end = mid-1;
        else beg = mid+1;

        mid = (int)((beg+end)/2);
    }

    if(data[mid].id==id1) {
            found = true;
            name1 = data[mid].name;
            cgpa1 = data[mid].cgpa;
    }
    else found = false;
}

void studentInfo::ResetList()
{
    currentPos = 0;
}

void studentInfo::GetNextItem(int& id1, string& name1, double& cgpa1)
{
    id1 = data[currentPos].id;
    name1 = data[currentPos].name;
    cgpa1 = data[currentPos].cgpa;
    currentPos++;
}

void studentInfo::Print()
{
    for(int i=0; i<length; i++)
    {
        cout << data[i].id << ", " << data[i].name << ", " << data[i].cgpa << endl;
    }
}
