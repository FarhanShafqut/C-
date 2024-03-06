#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j,k;

    for (i = 1; i<=row; i++)
    {
        for ( j = 1; j<=i; j++){
            cout<<"*";
        }
        int rev=2*row-2*i;
        for (k = 1; k<=rev; k++){
            cout<<" ";
        }
        for ( j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    // rev
    for (i = row; i>=0; i--)
    {
        for ( j = 1; j<=i; j++){
            cout<<"*";
        }
        int rev=2*row-2*i;
        for (k = 1; k<=rev; k++){
            cout<<" ";
        }
        for ( j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

}