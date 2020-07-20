

#include<stdio.h>

void main() {

	int radius;
	float area, PI = 3.14, ci;

	printf("Enter Radius Of Circle :\n");	// enter radius by user
	scanf("%d",&radius);			// accept radius

	area = PI * radius * radius;		// calculate area
	printf("Area of Circle is : %f\n",area);	// print area

	ci = 2 * PI * radius;			// calculate circumference
	printf("Circumference of Circle is : %f\n",ci);  // print circumference
}


