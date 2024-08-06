#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter any character: ";
	cin>>ch;
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
			cout<<ch<<" is a vowel"<<endl;
		}
		else{
			cout<<ch<<" is a consonant"<<endl;
		}
	}	
	else{
		cout<<"You did not enter a character"<<endl;
	}
	return 0;
}
	
