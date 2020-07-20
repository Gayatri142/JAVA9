
#include<stdio.h>

void main() {

	char ch;

	printf("Enter any character:\n");	// enter a character
	scanf("%c",&ch);			// accept that

	if(ch =='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {		// check the condition

		printf("Character is VOWEL:%c\n",ch);		// if true print this statement otherwie
	} else{

		printf("Character is CONSONANT :%c\n",ch);	// print this statement if condition false
	}
}

