

#include<stdio.h>

void main() {

	int x;

	printf("Enter a number :\n");
	scanf("%d",&x);

	for(int i = 1; i <= 100; i++) {

		if((x % i) == 0) {
			printf("%d\n",i);
		}
	}
}


// ethe aapn ek no user kadun enter karun ghetla aani x mde thevla
// nantr for mde condition check keli true zalyanantr aat mde aala
// parat if chi condition check keli x ha i ne divide kelyanantr  rem = 0 asel tr if mde jaun to no print karto
//
