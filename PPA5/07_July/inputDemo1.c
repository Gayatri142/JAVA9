

#include<stdio.h>

void main() {

	float val;

	printf("Enter float value \n");
	scanf("%f",&val);			//20.5

	printf("%d\n",val);			//20.50000   //1

}
//here output is wrong because we enter float type value but accept kartana %d use kelay aani internal represention of float and int is different so it gives 0.0000 as output
