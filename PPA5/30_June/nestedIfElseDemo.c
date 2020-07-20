

#include<stdio.h>

void main() {

	int marks = 80;
	int CompMarks = 70;

	if(marks > 70) {
		printf("FC / Modern ?\n");

		if(CompMarks > 80)
			printf("FC- BCS\n");
		else
			printf("Modern-BSC\n");
	}
	else{
		printf("Sportsman-Cricket\n");
	}
	printf("OutOfIfElse\n");
}

