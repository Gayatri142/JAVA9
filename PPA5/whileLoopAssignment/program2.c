

#include<stdio.h>

void main() {

	int n;
	int count = 0;

	printf("Enter a number :\n");
	scanf("%d",&n);

	while(n!=0) {

		n = n /10;
		count++;
	}
	printf("The number of digits in given number :%d\n",count);
}
