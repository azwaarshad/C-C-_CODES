#include <iostream>
using namespace std;
int main(){
	int ageInYears;
	float ageInMonths, ageInDays, ageInHours, ageInMinutes, ageInSeconds, ageInMilliseconds;
	
	cout<<"Enter your age: "<<endl;
	cin>>ageInYears;
	
	ageInMonths = ageInYears * 12;
	cout<<"Age in months is: "<<ageInMonths<<endl;
	
	ageInDays = ageInYears * 365;
	cout<<"Age in days is: "<<ageInDays<<endl;
	
	ageInHours = ageInYears * 8760;
	cout<<"Age in hours is: "<<ageInHours<<endl;
	
	ageInMinutes = ageInYears * 525600;
	cout<<"Age in minutes is: "<<ageInMinutes<<endl;
	
	ageInSeconds = ageInYears * 31536000;
	cout<<"Age in seconds is: "<<ageInSeconds<<endl;
	
	ageInMilliseconds = ageInYears * 31536000000.00;
	cout<<"Age in milliseconds is: "<<ageInMilliseconds<<endl;
	
	return 0;
}
