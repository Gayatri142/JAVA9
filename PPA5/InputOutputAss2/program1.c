

#include<stdio.h>

void main () {

	double d1,d2;

	printf("Enter First Double value \n");
	scanf("%lf",&d1);


	printf("Enter Second Double value \n");
	scanf("%lf",&d2);

	printf("Enter number upto single precision are : %.2f\t %.2f\t\n",d1,d2);

	printf("Their Addition is :%.2f\n",d1+d2);
	printf("Their Multiplication is :%.2f\n",d1*d2);
	printf("Their Substraction is :%.2f\n",d1-d2);
	printf("Their Division is :%.2f\n",d1/d2);

}



