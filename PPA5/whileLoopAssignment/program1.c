

#include<stdio.h>

void main() {

	int N;
	int i = 1;
	int sum = 0;
	int mult = 1;
	

	printf("Enter the number :\n");
	scanf("%d",&N);

	while(i<=N) {
		
		if(i % 2 == 0) 
			sum = sum + i;
		else
			mult = mult * i;
		
		i++;
	}
	printf("Sum Of All Even Numbers Between 1 to 10 : %d\n",sum);
	printf("Multiplication Of All Odd Numbers Between1 to 10 : %d\n",mult);
}


		
