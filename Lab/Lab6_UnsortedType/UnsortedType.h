#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H
template <class ItemType>
class UnsortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next; // address of the next node
    };
public:
    UnsortedType();
    ~UnsortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType&, bool&);
    void InsertItem(ItemType);
    void InsertItemEnd(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType&);
    void PrintList();
private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};

#endif // UNSORTEDTYPE_H
