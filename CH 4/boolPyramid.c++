#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; 
    int i,j;
    for (i = 1; i <=row; i++)
    {
  
        for ( j = 1; j <=i; j++)
        {
                    if((j+i)%2==0){
                        cout<<1;
                    }
                    else{
                        cout<<0;
                    }
        }
        cout<<"\n";
    }

}