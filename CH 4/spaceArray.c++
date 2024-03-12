#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j;
    for (i = 1; i <=row; i++)
    {

   for ( j = 1; j <=row-i; j++)
        {
                 cout<<" ";   
        }
        for ( j = 1; j <=row; j++)
        {
                 cout<<"*";   
        }
        cout<<"\n";
    }

}