#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j;
    int inc =1;
    for (i = 1; i<=row; i++)
    {
        for ( j = i; j>0; j--)
        {
                    cout <<inc;
            inc++;
        }
        cout<<"\n";
    }

}