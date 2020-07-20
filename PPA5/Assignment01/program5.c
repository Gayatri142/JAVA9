

#include<stdio.h>

void main(){

	float x = 5.2, y = 10.5;

	if(x == 5.2)
		printf("x:%d\n",x);

	if(y == 10.5);{
		printf("y:%d\n",y);
	}
	
}

// here it will give error because we define value of 'x' and 'y' as float and while orinting the value we use '%d' instead of '%f'
