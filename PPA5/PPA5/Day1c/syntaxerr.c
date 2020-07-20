#include<stdio.h>
void main(){
	int a=5,b=10,ans=0;

	//ans= a +++ b;//correct

	//printf("%d %d %d\n",a,b,ans);//6 10 15


	//s++;//error-lvalue required as incre operand
	

	//ans= a +++++ b;error lvalue required as incre operand
	//ans = a ++ ++ + b
	
	ans= a ++ + ++ b;

	printf("%d %d %d\n",a,b,ans);//6 11 16
}
