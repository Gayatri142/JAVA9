


#include<stdio.h>

void main() {

	float celsius, fahreneheit ;
	int step = 20;
	int low = 0;
	int upp = 100;

//	printf("Enter temperature in fahreneheit :\n");
	fahreneheit = low;

	while(fahreneheit <= 100) {

		celsius = (fahreneheit - 32.0) * (5.0 / 9.0);
		printf("%3.0f Fahreneheit = %6.1f Celsius\n",fahreneheit,celsius);
	
		fahreneheit = fahreneheit + step;
	}


}

