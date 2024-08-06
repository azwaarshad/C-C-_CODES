#include <iostream>
using namespace std;
int main(){
	float sub1, sub2, sub3, sub4, sub5, total, avg, percentage;
	cout<<"Enter marks of sub1 out of 100: "<<endl;
	cin>>sub1;
	cout<<"Enter marks of sub2 out of 100: "<<endl;
	cin>>sub2;
	cout<<"Enter marks of sub3 out of 100: "<<endl;
	cin>>sub3;
	cout<<"Enter marks of sub4 out of 100: "<<endl;
	cin>>sub4;
	cout<<"Enter marks of sub5 out of 100: "<<endl;
	cin>>sub5;
	
	total = sub1 +sub2 + sub3 + sub4 + sub5;
	avg = total / 5;
	percentage = (total / 500)* 100;
	
	cout<<"Total marks are: "<<total<<endl;
	cout<<"Average is: "<<avg<<endl;
	cout<<"Percentage is: "<<percentage<<"%"<<endl;
	
	if(percentage>=90){
		cout<<"Your grade is A+1"<<endl;
	}
	else if(percentage>=80){
		cout<<"Your grade is A+"<<endl;
	}
	else if(percentage>=70){
		cout<<"Your grade is A"<<endl;
	}
	else if(percentage>=60){
		cout<<"Your grade is B"<<endl;
	}
	else if(percentage>=50){
		cout<<"Your grade is C"<<endl;
	}
	else if(percentage>=40){
		cout<<"Your grade is D"<<endl;
	}
	else if(percentage>=33){
		cout<<"Your grade is E"<<endl;
	}
	else{
		cout<<"Your grade is F"<<endl;
	}
	
	if(percentage>80){
		cout<<"Congratulatins! You achieve 100% scholarship"<<endl;
	}
	else if(percentage>70 && percentage<80){
		cout<<"Congratulatins! You achieve 175% scholarship"<<endl;
	}
	else if(percentage>55 && percentage<70){
		cout<<"Congratulatins! You achieve 50% scholarship"<<endl;
	}
	else{
		cout<<"Sorry! You did not achieve any scholarship"<<endl;
	}
	
	return 0;
}
