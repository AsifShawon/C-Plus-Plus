#include<iostream>
using namespace std;
int main()
{
//        int arr[3 ] = {1,2,3};
//
//        cout<<arr[0]<<endl;

        int a[10] ;
        for(int i=0; i<10; i++)
            {
            cout<<"Enter " << i <<" Student Roll: ";
        cin>>a[i];
        }
        for(int i=0; i<10; i++){
        cout <<i<< "th Student Roll: " <<a[i]<<endl;
        }

        //Multidimensional array
        cout<<"Matrix"<<endl;
        int mat[3][3];
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
            cin>>mat[i][j];

            for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){

                    cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
            }
}
