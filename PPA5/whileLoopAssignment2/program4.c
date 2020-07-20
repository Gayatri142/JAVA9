

#include<stdio.h>

void main () {

	int n;

	printf("Enter No of days to complete the assignment :\n");
	scanf("%d",&n);

	while(n >= 0) {

		printf("%d days remaining\n",n);

		n --;
	}
}
