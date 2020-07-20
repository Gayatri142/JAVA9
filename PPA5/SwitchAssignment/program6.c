

#include<stdio.h>
void main() {
	
	int a=5, b=3;
	switch(a) {
		
		case 1:
			printf("One\n");
		case 5:
			printf("Two.\n");
		case b:
			printf("Three.\n");
		case 'a':
			printf("Four.\n");
		default:
			printf("Default.\n");
	}
}

// here it gives error because we assign value to 'a' as integer and we give as char 
