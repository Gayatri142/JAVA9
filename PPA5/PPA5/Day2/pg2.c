//increment and decre
#include<stdio.h>
void main(){
	int a=5,b=6,ans=0;

	ans= ++b + ++b + ++b;
	//ans= ++a + ++a;
	printf("%d %d \n",b,ans);  //9 25
}
