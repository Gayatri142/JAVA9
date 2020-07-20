 


#include<stdio.h>

void main(){
	int a = 2;

	
	switch(a){    //no error
		case 1:			//2 == 1
			printf("inside switch\n");
			break;
		case 2:			//2 == 2
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("four\n");
			break;
		case 5:
			printf("five\n");
			break;

	}

	printf("outside switch\n");
}



