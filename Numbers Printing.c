#include <stdio.h>

int main(){
	int val1=12345;
	float val2=1.2345;
	
	printf("Integer Values\n");
	printf("%8d\n", val1);
	printf("%6d\n", val1);
	printf("%10d\n\n", val1);
	
	printf("Floating Values\n");
	printf("%7.4f\n", val2);
	printf("%5.2f\n", val2);
	printf("%2.1f", val2);
	
	return 0;
}
