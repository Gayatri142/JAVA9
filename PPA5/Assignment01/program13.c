#include<stdio.h>

void main(){

	float n1, n2, n3;
	printf("Enter the values of n1,n2,n3");
	scanf("%f\n %f\n %f\n",n1,n2,n3);

	if(n1 >= n2 && n1 >= n3){
		printf("Largest number: %d",n1);
	}
	if(n2 >= n1 && n2 >= n3){
		printf("Largest number: %d",n2);
	}
	if(n3 >= n1 && n3 >= n2) {
		printf("Largest number: %d",n3);
	}



}
