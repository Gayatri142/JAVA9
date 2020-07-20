
#include<stdio.h>
void main(){
	int i=-3,j=2,k=0,m;
	m = ++i && ++j && ++k;
	printf("%d,%d,%d,%d\n",i,j,k,m);
}
/*----------------op-----------------
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ gcc p4.c
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ ./a.out
-2,3,1,1
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ 

*/


