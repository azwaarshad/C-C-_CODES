#include <stdio.h>
int main(){
	int num, sum=0;
	
	while(1){
		printf("Enter numbers (Negative numbers to stop): ");
		scanf("%d", &num);
		if(num<0)
			break;
		sum = sum + num;
	}
	printf("Sum of entered numbers is: %d", sum);
	
	return 0;
}
