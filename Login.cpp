#include <iostream>
using namespace std;
int main(){
	string userName, pswd;
	userName = "root";
	pswd = "123";
	
	if(userName == "admin" && pswd == "123")
	    cout<<"Login"<<endl;
	else
	    cout<<"Try Again!"<<endl;
	    
	cout<<"Enter User Name: "<<endl;
	cin>>userName;
	
	if(userName == "admin")
	    cout<<"Login"<<endl;
	else if(userName == "ADMIN")
	    cout<<"Login"<<endl;
	else
	    cout<<"Wrong!"<<endl;
	    
	cout<<"Enter User Name: "<<endl;
	cin>>userName;
	cout<<"Enter Pswd: "<<endl;
	cin>>pswd;
	if(userName == "admin" && pswd == "123")
	    cout<<"Login"<<endl;
	else
	    cout<<"Try Again"<<endl;
	
	cout<<"Enter user name: "<<endl;
	cin>>userName;
	
	if(userName == "admin"){
		cout<<"Enter pswd: ";
		cin>>pswd;
		if(pswd == "123"){
			cout<<"Login"<<endl;
		}
		else{
			cout<<"Wrong pswd!"<<endl;
		}
	}
	else
	    cout<<"User name not exist"<<endl;
}
