

#include<stdio.h>
void main() {

	extern int a = 20;
	printf("%d\n",a);
	printf("%d\n",sizeof(a));
}
