#include <iostream>
using namespace std;
int main(){
	int basicSalary, numberOfDays;
	float trafficAllowance, homeAllowance, medicalAllowance, utilityAllowance, pf_Fund, gratuity, gross_Salary, netSalary;
	
	cout<<"Enter your basic salary: "<<endl;
	cin>>basicSalary;
	cout<<"Enter how many days you were present"<<endl;
	cin>>numberOfDays;
	
	if(basicSalary>=25000 && basicSalary<40000){
		trafficAllowance = 0.1 * basicSalary;
		homeAllowance = 0.7 * basicSalary;
		medicalAllowance = 0.15 * basicSalary;
		utilityAllowance = 0.13 * basicSalary;
		pf_Fund = 0.12 * basicSalary;
		gratuity = 0.0481 * basicSalary;
		gross_Salary = basicSalary + trafficAllowance + homeAllowance + medicalAllowance + utilityAllowance + gratuity;
		netSalary = gross_Salary - pf_Fund;
		
		cout<<"Gross Salary is: "<<gross_Salary<<endl;
		cout<<"Net salary is: "<<netSalary<<endl;
	}	
	else if(basicSalary > 40000){
		trafficAllowance = 0.14 * basicSalary;
		homeAllowance = 0.1 * basicSalary;
		medicalAllowance = 0.16 * basicSalary;
		utilityAllowance = 0.15 * basicSalary;
		pf_Fund = 0.12 * basicSalary;
		gratuity = 0.0481 * basicSalary;
		gross_Salary = basicSalary + trafficAllowance + homeAllowance + medicalAllowance + utilityAllowance + gratuity;
		netSalary = gross_Salary - pf_Fund;
		
		cout<<"Gross Salary is: "<<gross_Salary<<endl;
		cout<<"Net salary is: "<<netSalary<<endl;
	}
	else{
		cout<<"You entered the wrong value!"<<endl;
	}
	
	return 0;
	}
