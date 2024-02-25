#include <iostream>
using namespace std;

int main() {
	int userArray[9];
    int size;
    int copiedUserArray[9];
			for (int i = 0; i <= sizeof(userArray)/sizeof(int); i++) {
        cout <<"Enter Data";
        cin>>userArray[i];
    };
    int firstSwap =sizeof(userArray)/sizeof(int);
    for (int i = 0; i <= sizeof(userArray)/sizeof(int); i++) {
       copiedUserArray[i]=userArray[i];
        cout<<copiedUserArray[i]<<"\n"<<"is copied"<<"\n"; 
    };
	return 0;
}