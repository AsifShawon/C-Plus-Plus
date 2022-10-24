#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
private:
    int **data = new int*[0];
    int row_size, col_size;
public:
    dynArr();
    dynArr(int,int);
    ~dynArr();
    void setValue(int, int, int);
    int getValue(int,int);
    void allocate(int,int);
};
#endif // DYNARR_H_INCLUDED

