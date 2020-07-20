

#include<stdio.h>

void main() {

	int year=2020;
	if(year%4==0 && year%100 != 0 || year %400 ==0 ){
		printf("%d year is leap year\n");
	}
}


// Here in 'if' block all the conditions are true so it will print output as year is leap year
