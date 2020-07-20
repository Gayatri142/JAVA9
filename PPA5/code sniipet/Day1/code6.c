#include<stdio.h>
void main(){

	int i = 5;
	int num1 = i / -4;
	int num2 = i % -4;
	printf("%d %d\n",num1,num2);
}
/*----------explanation--------------
 
/(devide) operator;
1. if divisor < 0 and divident >0 them ans is negative
i.e 5/-4 = -1

2. if divident < 0 and divisor > 0 then ans is negative
i.e -5/4 = -1

3. if divident > 0 and divisor >0 ans is positive
i.e 5/4 = 1

%(mod)operator:
1. if divisor < 0 and divident > 0 then ans is negative
e.g 5%-4 = -1

2. if divident < 0 and divisor > 0 then ans is negative
e.g 5%-4 = -1

3.if divident < 0 and divisor < 0 then ans is positive
e.g  -5%-4 = 1

4.if divident > 0 and divisor > 0 then ans is positive
e.g  5%4 = 1




