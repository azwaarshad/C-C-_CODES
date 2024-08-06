#include <stdio.h>
int main(){
	int start, end, sum=0;
	printf("Enter starting number: ");
	scanf("%d", &start);
	printf("Enter ending number: ");
	scanf("%d", &end);
	
	if(start%2==1){
		start ++;
	}
	
	printf("Even numbers are: ");
	while(start<=end){
		printf("%d ", start);
		sum = sum + start;
		start = start +  2;
	}
	printf("\nSum of even numbers: %d",sum);
	
	return 0;
}
