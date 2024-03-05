#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j;
    int work = row;
    for (i = 1; i<=row; i++)
    {
      for (int j = 0; j <row; j++)
      {
        if(j>=row-i){
            cout<<"*";
        }
        else{
            cout<<"1";
        }
      }
      
    cout<<"\n";
    }

}