#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j;
    for (i = 0; i<row; i++)
    {
        for ( j = 0; j<row; j++)
        {
          if(j==0+i || j==row-i ){
            cout<<"he";
          }
          else{
            cout<<" ";
          }
        }
        cout<<"\n";
    }

}