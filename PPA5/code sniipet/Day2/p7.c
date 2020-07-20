
#include<stdio.h>
void main(){
	int x= 12, y=7,z;
	z = x !=4 || y==2;;
	
	printf("z = %d\n",z);
}
/*----------------op-----------------
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ gcc p7.c
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day2$ ./a.out
z = 1

-----------explanation-----------------------

since we go from left to right 
z = (x!=4) || y==2;

as x is not equal to 4 returns true whitch is enough as the OR operator need only one parameter to be true
hennce the equ does not evaluate further whitch gives us the answer 
z = 1 option b.
*/

