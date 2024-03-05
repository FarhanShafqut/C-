#include<iostream>
using namespace std;
int main(int argc, char** argv) {
	cout<<"Enter num";
	int num;
	int div=3;
	cin>>num;
	if(num%2==0){
		cout<<"its even";
	}
	else{
		bool con=true;
		while(con){
			
			if(num%div==0){
				cout<<"it is divisible and odd";
				con=false;
			}
			else{
				div=div+1;
				if(num%div==0){
				cout<<"Prime";
				con=false;
			}
			
			}
		}
	}
	return 0;
}
