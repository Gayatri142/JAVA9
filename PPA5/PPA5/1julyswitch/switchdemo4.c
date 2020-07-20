 


#include<stdio.h>

void main(){
	int a = 2;

	
	switch(a){    //no error
		case 1:			//2 == 1
			printf("inside switch\n");
		case 2:			//2 == 2
			printf("Two\n");
		case 3:
			printf("Three\n");
		case 4:
			printf("four\n");
		case 5:
			printf("five\n");

	}

	printf("outside switch\n");
}



