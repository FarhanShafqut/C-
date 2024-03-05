#include<iostream>
using namespace std;
int main(int argc, char** argv) {
    int n;
    cout<<"Enter the range till n";
	cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            continue;
        }
        cout<<"its odd"<<i;
    }

	return 0;
}