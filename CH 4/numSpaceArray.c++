#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j,k;
    for (i = 1; i <=row; i++)
    {

   for ( j = 1; j <=row-i; j++)
        {
                 cout<<" ";   
        }
        for ( k = 1; k <=i; k++)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
    }

}