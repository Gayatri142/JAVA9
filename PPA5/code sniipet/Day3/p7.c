#include<stdio.h>
void main(){
	int x=3;
	int a= x++ + x++ + ++x + ++x;
	printf("%d",a);
}
/*------------------op-----------------

suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day3$ gcc p7.c
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day3$ ./a.out
20suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day3$ 
*/

