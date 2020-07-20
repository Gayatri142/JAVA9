

#include<stdio.h>

void main() {

	int a,b,ans;

	printf("Enter the Number for a and b: \n");
	scanf("%d %d",&a,&b);	//20 10
	
	//add
	ans = a + b;		//30
//	printf("Ans = %d\n",a+b);	// without storing ans value
	printf("Addition = %d\n",ans);	// storing the ans in third variable
	
	//Substract
	ans = a - b;		//10
	printf("Substraction = %d\n",ans);


	//multiply
	ans = a * b;	//200
	printf("Multiplication = %d\n",ans);


	//division
	ans = a / b;	//2
	printf("Division = %d\n",ans);
	
}
