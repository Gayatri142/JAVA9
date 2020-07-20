

#include<stdio.h>

void main() {

	char ch;

	printf("Enter a character ;\n");
	scanf("%c",&ch);

	if(ch >='A' && ch <= 'Z')
		printf("Character is in Upper Case\n");
	else
		printf("Character is in Lower Case\n");

}

