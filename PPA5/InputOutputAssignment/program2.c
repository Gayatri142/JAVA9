


#include<stdio.h>

void main() {

	int hours, miniutes, min;

	printf("Enter Hours :\n");	// enter hours
	scanf("%d",&hours);		// accept hours


	printf("Enter miniutes :\n");	// enter miniutes
	scanf("%d",&min);		// accept miniutes
	
	miniutes = hours * 60 + min;	// here first convert hours into minitues and add the miniutes entered by user into it
	
	printf("Total miniutes = %d\n",miniutes);	// print total miniutes

}
