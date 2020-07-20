

#include<stdio.h>

void main(){

	
	int choice;

	printf("Enter your choice :\n");
	scanf("%d",&choice);

	printf("1 : Bramha\n");
	printf("2 : Village\n");
	printf("3 : Soul Spice\n");
	printf("4 : Shalimar\n");

	switch(choice) {

		case 1 :
			printf("You choose Bramha\n");
			break;

		case 2 :
			printf("You choose Village\n");
			break;

		case 3 :
			printf("You choose Soul Spice\n");
			break;

		case 4 :
			printf("You choose Shalimar\n");
			break;
		default:
			printf("Wrong choice\n");
			break;
	}

	printf("Out Of Switch \n");
}
