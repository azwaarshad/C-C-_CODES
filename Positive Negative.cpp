#include <iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter an integer: "<<endl;
	cin>>number;
	if(number >= 0){
		cout<<"You entered a positive integer"<<endl;
	}
	else{
		cout<<"You entered a negative integer"<<endl;
	}
	cout<<"This line is always printed";
}
