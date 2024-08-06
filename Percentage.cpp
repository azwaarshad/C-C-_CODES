#include <iostream>
using namespace std;
int main(){
	float sub1, sub2, sub3, sub4, sub5, total, avg, percent;
	cout<<"Enter marks of subject 1: "<<endl;
	cin>>sub1;
	cout<<"Enter marks of subject 2: "<<endl;
	cin>>sub2;
	cout<<"Enter marks of subject 3: "<<endl;
	cin>>sub3;
	cout<<"Enter marks of subject 4: "<<endl;
	cin>>sub4;
	cout<<"Enter marks of subject 5: "<<endl;
	cin>>sub5;
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	avg = total / 5;
	percent = (total / 500)* 100;
	cout<<"Total marks of all the subjects are: "<<total<<endl;
	cout<<"Average of  marks is: "<<avg<<endl;
	cout<<"Percentage of marks is: "<<percent<<endl;
	
	return 0;
}
