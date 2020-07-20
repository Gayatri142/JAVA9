

#include<stdio.h>

void main(){

	int a=5;

	int b=10;

	int c=0;

	if(a && b)    			//True && True=True
		printf("Core2Web\n");  //Core2web
	if(b && c)	 		//True && False=False
		printf("Biencaps\n");
	if(b || c)			//True || False
		printf("Amazon\n");	//Amazon
}
