#include<stdio.h>
void main(){
	int a=65;

	switch(a){
		case 'A' :

			printf("A-case\n");
			break;

		case 'B' :
			printf("B-case\n");
			break;

		case '65':
			printf("6-case\n");
			break;
	}
	printf("Out of switch\n");
}
