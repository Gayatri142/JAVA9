
#include<stdio.h>

void main() {
	int num;	
	printf("Enter the Number");
	scanf("%d",&num);

	if(num>=25 && num<=50){
	       printf("'%d'belong in the range of 25 to 50",num);	
        }
	else{
		printf("'%d'Doesn’t belong in the range of 25 to 50",num);
	}	
}
