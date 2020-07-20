

#include<stdio.h>

void main() {

	int min;
	int hr;
	int miniute;

	printf("Enter minutes :\n");	// enter miniutes
	scanf("%d",&min);		// accept that miniutes

	hr = min / 60;			// convert miniute into hours
	miniute = min % 60;		// calulate miniutes

	printf("Hours =%d and Miniutes=%d\n",hr,miniute);	// print hours and miniutes
}
