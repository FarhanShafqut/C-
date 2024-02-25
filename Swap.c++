#include <iostream>
using namespace std;

int main() {
	int userArray[9];
    int size;
    
			for (int i = 0; i <= sizeof(userArray)/sizeof(int); i++) {
        cout <<"Enter Data";
        cin>>userArray[i];
    };
    int firstSwap =sizeof(userArray)/sizeof(int);
    int secondSwap =sizeof(userArray)/sizeof(int)-1;
    for (int i = 0; i <= sizeof(userArray)/sizeof(int); i++) {
       userArray[0+i]=userArray[firstSwap-i];
       userArray[1+i]=userArray[secondSwap-i];
    };
       
			for (int i = 0; i <= sizeof(userArray)/sizeof(int); i++) {
        cout<<userArray[i]<<""<<"is swapped"<<"\n"; 
    };
      
	return 0;
}