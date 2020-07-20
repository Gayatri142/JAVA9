

#include<stdio.h>

void main() {

	int num;

	printf("Enter any number :\n");
	scanf("%d",&num);

	for(int i = 1; i<= num; i++) {

		if(num % i ==0) {

			printf("%d\n",i);
		}
	}
}

// ethe aapn ek number user kadun enter karun gheto to num mde store karto
// for mde condtion check kartat true zali tr for mde jaun tithe parat if chi condition check kartat
// jr if chi condition true zali tr if mde jaun printf chi line print karto
