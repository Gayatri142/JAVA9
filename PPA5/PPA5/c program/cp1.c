//postincrement-preincrement
#include<stdio.h>
void main(){
	 int a=10;
	int b;
	a=a++;
	printf("%d\n",a);

	b=++a;
	printf("%d\n",b);

	+a;
	printf("%d\n",a);

	a--;
	printf("%d\n",a);
}
