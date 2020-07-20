#include<stdio.h>
void main(){

	int x=3;
	double y = 3.5;
	int z;
	z = x + y;
	printf("%f\n",z);
}
/*------------------op-----------------
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day3$ gcc p9.c
p9.c: In function ‘main’:
p9.c:8:11: warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘int’ [-Wformat=]
  printf("%f\n",z);
          ~^
          %d
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day3$ ./a.out
0.000000
suru@Suvarna:~/Core2web/PPA4(2019)/Code snifft/code snnipet C 2020/Day3$ 

----------------Explanation------------------------------

x is of int type and stroerd value 3 
y is of double type and stoerd value of 3.5
z is of int type

z = 3(int) + 3.50000000(double)
z = 6.5000000

but z is of int type ,so it will stored only 6
z=6
but in printf("%f\n",z)

format specifier is float/double type so it cannot convert int to double.
*/

