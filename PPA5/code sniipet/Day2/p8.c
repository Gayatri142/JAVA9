
#include<stdio.h>
void main(){

	int i= 4, j=-1,k=0,w,x,y,z;
	w = i || j || k;
	x = i && j && k;
	y = i || j && k;
	z = i && j || k;
	
	printf("%d %d %d %d\n",w,x,y,z);
}
/*----------------op-----------------
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ vim p8.c
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ gcc p8.c
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ ./a.out
1 0 1 1
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ 


*/

