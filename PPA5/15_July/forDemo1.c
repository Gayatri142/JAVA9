

//sum = 55
//


#include<stdio.h>

void main() {
	
	int sum = 0;
	int startNum = 0;
	int endNum = 0;

	printf("Enter starting and ending number ;\n");
	scanf("%d %d",&startNum, &endNum);

	for(int i = startNum ; i <= endNum; i++) {

		sum = sum + i;
	}
	printf("Sum = %d\n",sum);
}
