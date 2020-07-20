

#include<stdio.h>


void main(){

	int marks=80;
	int compmarks=75;

	if(marks>70){
		printf("Fc/morden?\n");

		if(compmarks>80){

			printf("Fc_BCS\n");
		}
		else{
			printf("Modern-BSC\n");
		}
	}
	else{
		printf("sportman -Cricket\n");
	}
	printf("Out of if-else\n");
}
