#include <stdio.h>
#include <math.h>
int main(){
	float value=100.453627;
	float nearestDigit, tenth, hundredth, thousandth, ten_thousandth;
	
	nearestDigit = round(value);
	tenth = round(value * 10)/10;
	hundredth = round(value * 100)/100;
	thousandth = round(value * 1000)/1000;
	ten_thousandth = round(value * 10000)/10000;
	
	printf("Rounded value to the nearest digit is: %.0f\n",nearestDigit);
	printf("Rounded value to tenth is: %.1f\n",tenth);
	printf("Rounded value to hundredth is: %.2f\n",hundredth);
	printf("Rounded value to thousandth is: %.3f\n",thousandth);
	printf("Rounded value to ten-thousandth is: %.4f",ten_thousandth);
	
	return 0;
}
