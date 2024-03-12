#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j,k;
    for (i = 1; i <=row; i++)
    {
        int del=row-i;
   for ( j = 1; j <=row-i; j++)
        {
                 cout<<" ";   
        }
        for ( int f = row-del; f>=1; f--)
        {
            if(f!=1){
            cout<<f;
            }
        }
        for ( k = 1; k <=i; k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }

}