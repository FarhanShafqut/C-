#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j;
    for (i = 1; i<=row; i++)
    {
        for ( j = i; j>0; j--)
        {
                    cout <<i;
        }
        cout<<"\n";
    }

}