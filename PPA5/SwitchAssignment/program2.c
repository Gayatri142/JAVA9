

#include <stdio.h>

void main() {
	int x = 10;
	int y = 20;

	switch(x) {

		case x:
			printf("Case 10\n");
			printf("x= %d\n",x);
			break;
		case y:
			printf("Case 20\n");
			printf("y= %d\n",y);
			break;
		default:
			printf("Default\n");
			break;
	}
}

//  ethe error yeto karan aapn switch mde expession 'int' mhanun deto aani case mde lable detana char detoy mhanun error yet case lablecannot reduce to integer karan jeva aapn char as lable deto teva aapn te single quoate deto 
