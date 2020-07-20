#include<stdio.h>
void main(){
	int a=5,b=6,ans=0;

	ans= b++ + b++;
	printf("%d %d\n",b,ans);   //8 14
}
