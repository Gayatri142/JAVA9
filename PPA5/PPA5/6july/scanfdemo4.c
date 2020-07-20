#include<stdio.h>
void main(){

	int a,b;
	int ans;
	
	printf("Enter number for a and b :\n");
	scanf("%d %d",&a,&b);
	
	//add	
	ans=a+b;
	printf("add = %d\n",ans);

	//sub
	ans=a-b;
	printf("sub = %d\n",ans);

	//mul
	ans=a*b;
	printf("mul = %d\n",ans);

	//div
	ans=a/b;
	printf("div = %d\n",ans);
}
