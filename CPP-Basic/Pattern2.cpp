#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter line number:";
    cin >> n;

    // pattern 1
    printf("Pattern1\n");
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    // pattern 2
    printf("\nPattern2\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    //pattern 3
    printf("\nPattern3\n");
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    //pattern 4
    printf("\nPattern4\n");

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    //pattern 5
    printf("\nPattern5\n");

    for(int i=n; i>=1; i--){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        printf("*");
        for(int j=1; j<=n-i; j++){
            if(j==1) printf(" ");
            else printf("  ");
        }
        if(i<n) printf("*");
        printf("\n");
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        printf("*");
        for(int j=1; j<=n-i; j++){
            if(j==1) printf(" ");
            else printf("  ");
        }
        if(i<n) printf("*");
        printf("\n");
    }

    //pattern 5
    printf("\nPattern5\n");

    for(int row=1;row<n;row++){
        for(int column=1;column<=row;column++){
            printf("*");
        }
        printf("\n");
    }
    for(int row=n;row>=1;row--){
        for(int column=1;column<=row;column++){
            printf("*");
        }
        printf("\n");
    }
}
