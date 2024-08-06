#include <stdio.h>

int square(int z);

int main(){
	int x,y;
	printf("Enter any number: ");
	scanf("%d",x);
	
	y = square(x);
	printf("%d", y);
	
}
int square(int y){
	return y*y;
}
