

#include<stdio.h>

void main() {

	int n1,n2;
	float avg;

	printf("Enter two numbers:\n"); // here we entere two numbers from user
	scanf("%d %d",&n1, &n2);	// accept those numbers

	avg = (n1 + n2) / 2;		// calculate avg by first adding those numbers after divide the addition by 2

	printf("Average of %d&%d = %f\n", n1, n2,avg);	// print the average of those numbers
}
