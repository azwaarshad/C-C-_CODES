#include <stdio.h>
using namespace std;
int main(){
	int a=5, b=10;
	int c=a;
	a = b;
	b = c;
	printf("value of a is %d\n",a);
	printf("Value of b is %d", b);
	return 0;
}
