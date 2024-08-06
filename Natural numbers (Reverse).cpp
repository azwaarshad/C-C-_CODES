#include <stdio.h>

int main(){
	int n;
	
	printf("Enter a positve integer: ");
	scanf("%d", &n);
	
	printf("Natural numbers in reverse from %d to 1:\n", n);
	while(n>=1){
		printf("%d\n",n);
		n--;
	}
	return 0;
}
