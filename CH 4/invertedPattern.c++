#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j;
    for (i = row; i >0; i--)
    {
        for ( j = i; j >0; j--)
        {
                    cout << "*";
        }
        cout<<"\n";
    }

}