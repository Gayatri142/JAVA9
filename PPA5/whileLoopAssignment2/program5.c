

#include<stdio.h>

void main() {

	int lb, ub ,square , cube;

	printf("Enter Lower Bound :\n");
	scanf("%d",&lb);

	printf("Enter Upper Bound :\n");
	scanf("%d",&ub);

	while(lb <= ub) {

		if(lb % 2 == 0){ 
			square = lb * lb;
			printf("%d\n",square);
		}else{

			cube = lb * lb * lb;
			printf("%d\n",cube);
		}
		lb++;
	}

	
}

