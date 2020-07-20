
#include<stdio.h>

void main(){

	char ch;
	printf("Enter any character :");
	scanf("%c",&ch);

	if(ch>='A'&& ch<='Z'){
		printf("'%c' is in upper case",ch);
	}else if(ch>='a'&&ch<='z'){
		printf("'%c' is in lower case",ch);
	}
	else{
		printf("character is a special symbol");
	}
}
