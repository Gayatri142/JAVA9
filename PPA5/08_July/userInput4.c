

#include<stdio.h>

void main(){

	int x,y;
	int choice;

	printf("Enter value for x and y :\n");
	scanf("%d %d",&x,&y);

	printf("Enter your choice :\n");
	scanf("%d",&choice);

	printf("1 : Add\n");
	printf("2 : Sub\n");
	printf("3 : Mul\n");
	printf("4 : Div\n");

	switch(choice) {

		case 1 :
			printf("Add = %d\n",x+y);
			break;

		case 2 :
			printf("Sub = %d\n",x-y);
			break;

		case 3 :
			printf("Mul = %d\n",x*y);
			break;

		case 4 :
			printf("Div = %d\n",x/y);
			break;
		default:
			printf("Wrong choice\n");
			break;
	}

	printf("Out Of Switch \n");
}
