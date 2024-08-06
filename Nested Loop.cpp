#include <iostream>
using namespace std;
int main(){
	char Employee, Gender;
	int Age;
	cout<<"Enter your marital status \"m\" for married \"u\" for unmarried: "<<endl;
	cin>>Employee;
	
	if(Employee=='u' || Employee=='U'){
		cout<<"Enter your gender \"m\" for male \"f\" for female: \n";
		cin>>Gender;
		
		cout<<"Enter your age: "<<endl;
		cin>>Age;
		
		if((Gender=='m' || Gender=='M') && Age>=27){
			cout<<"You are hired!"<<endl;
		}
		else if((Gender=='f' || Gender=='F') && Age>=21){
			cout<<"You are hired!"<<endl;
		}
		else{
			cout<<"Sorry! You are not eligible"<<endl;
		}
		}else if(Employee=='M' || Employee=='m'){
			cout<<"You are hired!"<<endl;
		}
		else{
			cout<<"We are sorry apna elaj karwao"<<endl;
		}
	return 0;
}
