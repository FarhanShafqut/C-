#include<iostream>
using namespace std;
int main(int argc, char** argv) {
	cout<<"Enter num";
	int num;
	int div=3;
	int div1=0;
	cin>>num;
	num=num+1;
		bool con=true;
		do{
				div=div+1;
				if(num%div==0){
				cout<<"Prime";
			}
			div1=div1+1;
			}while(num!=div1);
		
	
	return 0;
}
