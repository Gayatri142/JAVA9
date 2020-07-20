#include<stdio.h>

void main(){

	int number1, number2;
	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);
	if (number1 >= number2) {
		if (number1 == number2) {
			printf(" %d = %d",number1,number2);
		}
		else {
			printf(" %d > %d", number1, number2);
		}
	}
	else {
		printf(" %d < %d",number1, number2);
	}
}
// here first we accept two numbers from user then 
// in first if we check first number is greater than second then
// it goes into inner if and if condition of inner if is true then it will print statement in that if otherwise it will goes in else part
// if outer 'if' condition false then it will execute else part directly
