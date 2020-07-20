
#include<stdio.h>
void main(){

	int x= 4, y,z;
	y = --x;
	z = x--;
	
	printf("%d %d %d \n",x,y,z);
}
/*----------------op-----------------
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ gcc p10.c
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ ./a.out
2 3 3 
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ 

*/

