#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c,Ans1,Ans2,Ans3,Ans4;
	printf("Enter value of a:\n");
	scanf("%d", &a);
	printf("Enter value of b:\n");
	scanf("%d", &b);
	printf("Enter value of c:\n");
	scanf("%d", &c);
	Ans1 = pow(b,2)-(4*pow(a,3)*b);
	Ans2 = 4*a*sqrt(c);
	Ans3 = sqrt(Ans1/Ans2);
	Ans4 = -sqrt(Ans1/Ans2);
	printf("The first answer is %d \n", Ans3);
	printf("The second answer is %d \n", Ans4);
	return 0;
}
