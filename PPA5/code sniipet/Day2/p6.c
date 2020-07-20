
#include<stdio.h>
void main(){
	int i = -3, j=2,k=0,m;
	m = ++i || ++j && ++k;
	
	printf("%d,%d,%d,%d\n",i,j,k,m);
}
/*----------------op-----------------
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ gcc p6.c
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ ./a.out
-2,2,0,1
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ 

----------exlanation---------

even throght the proroty of && is higher than || we go from left to right fisrt where:
i= increment value refrence
m = -2 ||(++i && ++k)

as hoil he
*/


