#include<iostream>
using namespace std;
int main(int argc, char** argv) {
	cout<<"Enter num";
	int num,sum;
    cin>>num;
    sum=0;
    for (int i=0;i<=num;i++){
        sum=sum+i;
    }
	cout<<sum;
	return 0;
}