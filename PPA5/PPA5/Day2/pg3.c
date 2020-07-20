#include<stdio.h>
void main(){
	int a=7,b=8,ans=0;

	ans=++a + ++a + ++a;

	printf("%d %d\n",a,ans); //10 28

	ans= --b + --b + --b;
	printf("%d %d\n",b,ans);//5 17

}
