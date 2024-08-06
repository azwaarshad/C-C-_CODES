#include <stdio.h>
int main(){
	int n, rev = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	int remain=n%10;
	while(n>=0){
		rev = rev*10+remain;
		n = n/10;
	}
	printf("Reverse is %d", rev);
	
	return 0;
}
