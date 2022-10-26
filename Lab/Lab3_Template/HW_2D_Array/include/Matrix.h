#ifndef Matrix_H
#define Matrix_H

template<class T>
class Matrix
{
    private:
        T **data ;
        int row_size, col_size;
    public:
        Matrix(int , int);
        void setValue(int,int,T);
        T getValue(int,int);
        ~Matrix();
};

#endif //Matrix_H
