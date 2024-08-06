#include <stdio.h>
int main(){
	int Fahrenheit;
	float Celsius;
	
	printf("%10s %10s\n", "Fahrenheit", "Celsius");
	
	for(Fahrenheit=0; Fahrenheit<=212; Fahrenheit++){
		Celsius = (5.0/9.0)*(Fahrenheit-32);
		printf("%10d %+10.3f\n", Fahrenheit, Celsius);
	}
	
	return 0;
}
