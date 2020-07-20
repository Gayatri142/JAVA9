#include<stdio.h>
void main(){
	int a = 20 , b = 15, c = 5;
	int d;
	d= a==(b+c);
	printf("%d",d);
}
/*-------------explanation--------------------
 *Expression d = a==(b+c)
 here brakets has high priority
  d= a==(15+5)
  = a== 20
  = 20 ==20 //coparison operator == :
  will evaluate to true if the both value are equal and return 1
  =1
 */
