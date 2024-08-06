#include <stdio.h>

int isPositive(int num);
int isEven(int num);
int isOdd(int num);
char convUpper(char ch);
char convLower(char ch);

int main(){
	int a,b,c;
	char x,y;
	printf("Enter any number(to check number is positive or not): ");
	scanf("%d", &a);
	printf("\nEnter any number(to check number is even or not): ");
	scanf("%d", &b);
	printf("\nEnter any number(to check number odd or not): ");
	scanf("%d", &c);
	printf("\nEnter a lowercase character(to convert into uppercase): ");
	scanf("%c", &x);
	printf("\nEnter an uppercase character(to convert into lowercase): ");
	scanf("%c", &y);
	
	isPositive(a);
	isEven(b);
	isOdd(c);
	convUpper(x);
	convLower(y);
	return 0;
}

int isPositive(int num){
	if(num>=0)
		printf("\n%d is a positive number",num);
	else
		printf("\n%d is a negative number",num);
}

int isEven(int num){
	if(num%2==0)
		printf("\n%d is an even number",num);
	else
		printf("\n%d is not an even number",num);
}

int isOdd(int num){
	if(num%2!=0)
		printf("\n%d is an odd number",num);
	else
		printf("\n%d is not an odd number",num);
}

char convUpper(char ch){
	if(ch>='a' && ch<='z')
		printf("\nThe uppercase letter is: %c",ch - ('a'-'A'));
	else
		printf("\nYou did not enter a lowercase letter");
}

char convLower(char ch){
	if(ch>='A' && ch<='Z')
		printf("\nThe lowercase letter is: %c",ch + ('a'-'A'));
	else
		printf("\nYou did not enter an uppercase letter");
}
