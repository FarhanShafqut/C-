#include <iostream>
using namespace std;
int main() {
	int userArray[4];
    int size;
	for (int i = 0; i <= sizeof(userArray)/sizeof(int); i++) {
        cout <<"Enter Data";
       	 cin>>userArray[i];
    };
    int firstSwap =sizeof(userArray)/sizeof(int);
    int copiedUserArray[firstSwap];
//       copying
for (int i = 0; i <= sizeof(userArray)/sizeof(int); i++) {
       copiedUserArray[i]=userArray[i];
    };
//    Swapping
    for (int i = 0; i <= firstSwap/2; i++) {
       userArray[i]=userArray[firstSwap-i];
        userArray[firstSwap-i]= copiedUserArray[i];
    };
  
       
			for (int i = 0; i <= firstSwap; i++) {
        cout<<userArray[i]<<""<<"is swapped"<<"\n"; 
    };
      
	return 0;
}
