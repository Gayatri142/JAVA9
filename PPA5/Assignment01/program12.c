
#include<stdio.h>

void main() {

	int num=36;
		if(num%2 ==0){
			printf("%d is divisible by 2\n",num);
			if(num%3 == 0){
				printf("%d is divisible by 3\n",num);
				if(num%5==0){
					printf("%d is divisible by 5\n",num);
				}else {
					printf("%d is not divisible by 5\n",num);
				}
			}else{
				printf("%d is not divisible by 3\n",num);
			}
		}
		else{
			printf("%d is not divisible by 2",num);
		}
	//Other Values: num = 30; num=120; num =76; num =36;
}
// here 
num =120 
all the condition of'if' are true for 120 so it will print all the statement in all three'if'block
num = 30
all the condition of'if' are true for 120 so it will print all the statement in all three'if'block
num = 76
here first 'if' get executed and  inner first 'if' condition get false so it directly goes to else part
