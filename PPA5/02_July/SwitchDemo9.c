

#include<stdio.h>

void main() {

	int a = 65;

	switch(a) {

		case 'A':
			printf("A-case\n");
			
		case 'B':
			printf("B-case\n");
			
		case '65':
			printf("65-case\n");
			break;
	}
	printf("Out Of Switch\n");
}

