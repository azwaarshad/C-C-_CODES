#include <iostream>
using namespace std;
int main(){
	float tempInCelcius, tempInReaumur, tempInFahrenheit, tempInKelvin, tempInRankine;
	
	cout<<"Enter temperature in celcius: "<<endl;
	cin>>tempInCelcius;
	
	tempInReaumur = (tempInCelcius * 4) / 5;
	cout<<"Temperature in Reaumur is: "<<tempInReaumur<<endl;
	
	tempInFahrenheit = (tempInCelcius * 9/5) + 32;
	cout<<"Temperature in Fahrenheit is: "<<tempInFahrenheit<<endl;
	
	tempInKelvin = tempInCelcius + 273.15;
	cout<<"Temperature in Kelvin is: "<<tempInKelvin<<endl;
	
	tempInRankine = (tempInCelcius * 9/5) + 491.67;
	cout<<"Temperature in Rankine is: "<<tempInRankine<<endl;
	
	return 0;
}
