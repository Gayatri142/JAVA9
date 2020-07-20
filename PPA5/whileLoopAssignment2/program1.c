


#include<stdio.h>

void main() {

	int n, sum = 0;
	int i = 1;

	printf("Enter a number :\n");
	scanf("%d",&n);

	while(i <= n) {

		sum = sum + i;
		++i;
	}
	printf("The Sum of all natural numbers between 1 to 10 : = %d\n",sum);
}


