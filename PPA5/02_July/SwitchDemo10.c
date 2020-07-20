

#include<stdio.h>

void main() {

	char ch = 'd';

	switch(ch) {

		default:
                        printf("Default case\n");
			break;
                case 'A':
			printf("A-case\n");
			break;
			
		case 'B':
			printf("B-case\n");
			break;
		case 'C':
			printf("C-case\n");
			break;
		case 'D':
			printf("d-case\n");
			break;
		
	}
	printf("Out Of Switch\n");
}

