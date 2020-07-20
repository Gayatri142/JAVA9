#include<stdio.h>
void main(){
	
	int a =5;
	int b = ++a + a++ + --a;
	printf("value of b is %d",b);
}
/*----Explanation-----
 b = ++a + a++ + --a; a=5
 ++ has hights priority than + operator
 = a + a++ + --a // a=6 return reference of it

 = a + temp + --a // a=7 ,temp= 6, return temp

 = 7 + 6 + a // a= 6,return reference

 = 7 + 6 + 6 // then addition will be done

 = 19
 
*/
