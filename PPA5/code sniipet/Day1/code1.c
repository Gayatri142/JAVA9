#include<stdio.h>
void main(){

	int x = 7% 4 *3 /2;
	printf("value of x is %d",x);
}
/*------explanation----------\
 x =7 % 4 * 3 / 2
 operand used:
 % , * and /
 all three have same priority so theexpression will be calculate as per associativity i.e left to right
 = 3 % 3 / 2
 = 9/2
 =4

*/
