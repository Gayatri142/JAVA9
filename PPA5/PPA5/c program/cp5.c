#include<stdio.h>
void main(){
	const int first=10;
	int second=20;
	const int third=30;
	int val1,val2;
	printf("first value=%d\n",first);
	printf("second value=%d\n",second);
	printf("third value=%d\n",third);

	val1=first+5;
	second=second+3;
	val2=third+2;

	printf("first value=%d\n",first);
	printf("second value=%d\n",second);
	printf("third value=%d\n",third);
	printf("value1=%d\n",val1);
	printf("value2=%d\n",val2);
}

