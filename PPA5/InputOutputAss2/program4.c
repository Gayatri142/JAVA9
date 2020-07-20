

#include<stdio.h>

void main() {

	int num, count = 0;
	
	printf("enter the number\n");
	scanf("%d",&num);

	for(int i = 1; i <= num; i++) {

		if(num % i == 0) {

			count++;
		}
	}
	if(count ==2) 
		printf("%d count is prime\n",count);
	else
		printf("%d count is not prime\n",count);
}


