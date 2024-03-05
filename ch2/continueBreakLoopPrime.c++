#include<iostream>
using namespace std;
int main(int argc, char** argv) {
    int n;
    cout<<"Enter num";
	cin>>n;
	int i;
    for(i=2;i<n;i++){
//    	cout<<"why";
        if(n%i==0){
            cout<<"its not prime";
            break;
        }
    }
	 if(i==n){
        cout<<"its prime"<<i;
        }
	return 0;
}