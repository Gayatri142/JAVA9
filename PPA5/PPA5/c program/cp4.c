#include<stdio.h>
void main(){
	const int first;
	int second;
	const int third;

	printf("enter value:\n");
	scanf("%d\n",&first);
	scanf("%d\n",&second);
	scanf("%d\n",&third);

	printf("first value=%d\n",first);
	printf("second value=%d\n",second);
	printf("third value=%d\n",third);

	first=first+5;
	second=second+3;
	third=third+2;

	printf("first value=%d\n",first);
	printf("second value=%d\n",second);
	printf("third value=%d\n",third);
}


	
