#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin >> row >> col;

    // rectangle pattern
    cout << "rectangle pattern\n";
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";

    // hollow rectangle patern
    /*
        4 4
        ****
        *  *
        *  *
        ****
    */
   cout << "hollow rectangle pattern\n";
   for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
        if((i==1 || i==row)){
            cout << "*";
        }
        else if(j==1 || j==col) cout << "*";
        else cout << " ";
    }
    cout << "\n";
   }
    // inverted half peramid
    /*
    5
    *****
    ****
    ***
    **
    *
    */
   
   cin >> row;
   cout << "inverted half peramid\n";
   for(int i=0; i<row; i++){
    for(int j=0; j<row-i; j++){
        cout << "*";
    }
    cout << "\n";
   }

   // half pyramid after 180 degree rotation
   /*
   5
        *
       **
      ***
     ****
    *****
   */
  cout << "\nhalf pyramid after 180 degree rotation\n";
  for(int i=0; i<row; i++){
    for(int j=0; j<row-i-1; j++){
        cout << " ";
    }
    for(int j=0; j<i+1; j++){
        cout << "*";
    }
    cout << "\n";
  }

  //  Butterfly patern
  /*
    4
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *
  */
    cout << "\nButterfly pattern\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<i+1; j++){
            cout<< "*";
        }
        for(int j=0; j<2*row-2*i-2; j++){
            cout << " ";
        }
        for(int j=0; j<i+1; j++){
            cout<< "*";
        }
        cout << "\n";
    }
    for(int i=row-1; i>=0; i--){
        for(int j=0; j<i+1; j++){
            cout<< "*";
        }
        for(int j=0; j<2*row-2*i-2; j++){
            cout << " ";
        }
        for(int j=0; j<i+1; j++){
            cout<< "*";
        }
        cout << "\n";
    }

    // Print 0-1 pattern
    /*
    5
    1
    01
    101
    0101
    10101
    */
   cout << "\nPrint 0-1 pattern\n";
   for(int i=0; i<row; i++){
    for(int j=0; j<i+1; j++){
        if((i+j)%2==1) cout << 0; // when (row+column) = odd 
        else cout << 1;
    }
    cout << "\n";
   }

   //Rhombus pattern
   /*
   5
        *****
       *****
      *****
     *****
    *****
   */
  cout << "\nRhombus pattern\n";
  for(int i=0; i<row; i++){
    for(int j=0; j<row-i-1; j++){
        cout << " ";
    }
    for(int j=0; j<row; j++){
        //if(i==0 || i==row-1)
            cout << "*";
        // else if(j==0 || j==row-1)
        //     cout << "*";
        // else cout << " ";
    }
    cout << "\n";
  }

    // palindromic pattern 1
    /*
    5
        1
       212
      32123
     4321234
    543212345
    */
   cout << "\npalindromic pattern-1\n";
   for(int i=1; i<=row; i++){
    for(int j=1; j<=row-i; j++){
        cout << " ";
    }
    for(int j=i; j>0; j--){
        cout << j;
    }
    if(i>1){
        for(int j=2; j<=i; j++){
            cout << j;
        }
    }
    cout << "\n";
   }

    // zig-zag pattern
    /*
    9
        *       *
      *   *   *   *
    *       *       *
    */
   cout << "\nZig-Zag pattern\n";
   for(int i=1; i<=3; i++){
    for(int j=1; j<=row; j++){
        if((i+j)%4==0 ||(i==2 && j%4==0)) cout << "* ";
        else cout << "  ";
    }
    cout << "\n";
   }
}