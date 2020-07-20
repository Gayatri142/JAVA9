#include<stdio.h>
void main(){

	int a = 20;
	double b = 15.6;
	int c;
	c = a + b;
	printf("%d",c);
}
/*-------explanation------------
 a = 20 //type int
 b == 15.6 //double
 c= (garbege) //type int
 c = a+b
 = 20 + 15.6 // addition of two double or float value is alwys double value
 = 35.6
 c = 35 // but we are storing it in int type variable to be truncate the mentisa i.e digit after(.) and value is implicitly convert to the int
 */

