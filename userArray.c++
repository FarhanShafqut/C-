#include <iostream>
using namespace std;

int main() {
	int userArray[9];
			for (int i = 0; i <= 9; i++) {
        cout <<"Enter Data";
        cin>>userArray[i];
    };
    for (int i = 0; i <= 9; i++) {
        cout <<"Your Data";
        cout<<userArray[i]<<"\n";
    };
	return 0;
}
