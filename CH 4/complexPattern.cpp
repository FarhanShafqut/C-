#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int i,j;
    for (i = 0; i < row; i++)
    {
        if (i == 0 || i == row-1)
            {
                for (int a = 0; a < col; a++){
                cout << "*";
                }
                 cout<<"\n";
            }
            else{
        for (int j = 0; j < col; j++)
        {
            if (j == 0 || j == col-1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
        }
        cout<<"\n";
            }
        
    }
    cout<<i;
}