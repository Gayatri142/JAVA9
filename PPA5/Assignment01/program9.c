

#include<stdio.h>

void main() {

	int number=10;
	if(number!=0 && number>0){
		printf("%d is a positive no\n",number);
		number=-5;
	}
	if(number<0 ){
		printf("%d is a negtive no\n",number);
		number=0;
	}
	if(number==0){
		printf("number is zero\n");
		number=15;
	}
	if(number%4==0);{
		printf("%d is divisible by 4\n",number);
	}
}

// here first 'if' block get executed cause both condition are true and it will print statement
// In second'if' after first 'if'executed value of number becomes '-5' and condition of second 'if' is true so it will execute and pprint the statement
// In third'if' after second'if' executed value of number becomes'0' and condition of third 'if' is true so it will execute and print output
// In fourth 'if' after executing third'if' value of number becomes '15' and condition of fourth 'if' is true so it will execute and print output
// so output looks like
//10 is positive number
//-5 is negative number
//number is 0
//15 is divisible ny 4
