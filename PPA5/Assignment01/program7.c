

#include<stdio.h>

void main(){

	int weight=50;
	if(weight<50 && weight >30){
		printf("You are under weight\n");
	}
	if(weight>=50 && weight <= 70){
		printf("you are well maintained\n");
	}
	if(weight > 70);{
		printf("you are overweight you have to work hard\n");
	}
}

// here in this program
// In first 'if' both conditions are false so first 'if' not get executed
// In Second 'if' both the cconditions are true so it will executed and print outout as"you are well maintained"
// In third 'if' condition is false but we give ';' at the end of 'if' so it will considered as null statement and it will print all  the statement next to it ..so it will give output as "you are overweight you have to work hard
// ....Here output of program looks like ...
// you are well maintained
// you are overweight you have to work hard
