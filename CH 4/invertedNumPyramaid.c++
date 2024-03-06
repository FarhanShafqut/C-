#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j;
    for (i = 1; i <=row; i++)
    {
  
        for ( j = 1; j <=row+1-i; j++)
        {
                    cout <<j;
        }
        cout<<"\n";
    }

}