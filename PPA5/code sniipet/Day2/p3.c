#include<stdio.h>
void main(){
	int i=-30,j=20,k=1,m;
	m=++i && ++j && --k;
	printf("%d,%d,%d,%d\n",i,j,k,m);
}
/*----------------op-----------------
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ vim p3.c
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ gcc p3.c
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ ./a.out
-29,21,0,0
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ 

*/


