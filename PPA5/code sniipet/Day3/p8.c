#include<stdio.h>
void main(){
	int x=a , a=3,b=6;
	
	printf("%d",x);
	printf("%d",a);
	printf("%d",b);
}
/*------------------op-----------------
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day3$ gcc p8.c
p8.c: In function ‘main’:
p8.c:3:8: error: ‘a’ undeclared (first use in this function)
  int x=a , a=3,b=6;
        ^
p8.c:3:8: note: each undeclared identifier is reported only once for each function it appears in
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day3$ vim p8.c
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day3$ 

*/

