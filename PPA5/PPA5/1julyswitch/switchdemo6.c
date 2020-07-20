 


#include<stdio.h>

void main(){
	int a = 2;

	
	switch(a){    //no error
		case 1:	
			{		//2 == 1
			printf("one\n");
			printf("1\n");
		
			break;
			}
		case 2:	{	//2 == 2
			printf("Two\n");
			printf("2\n");
			break;
			}
		case 3:{
			printf("Three\n");
			printf("3\n");
			break;
		       }
		case 4:{
			printf("four\n");
			printf("4\n");
			break;
		       }
		case 5:{
			printf("five\n");
			printf("5\n");
			break;
		       }

	}

	printf("outside switch\n");
}



