#include <iostream>
using namespace std;
int maximum(int x, int y);
int main(){
	int n1, n2;
	cout<<"Enter numbers: "<<endl;
	cin>>n1>>n2;
	
	cout<<"The maximum integer value is: "<<maximum(n1, n2)<<endl;
}

int maximum(int x, int y){
	int maximumValue{x};
	
	if(y>maximumValue){
		maximumValue = y;
	}
	return maximumValue;
}
