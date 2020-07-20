

#include<stdio.h>

void main () {

	int num ,i = 1,sum = 0;

	printf("Enter a number :\n");
	scanf("%d",&num);

	while(i < num) {

		if(num % i == 0){

			sum = sum + i;
		}
		i++;
	}

	if(sum == num)
		printf(" %d i a perfect  number.\n",num);
	else
	       	printf(" %d i a perfect  number.\n",num);
}





