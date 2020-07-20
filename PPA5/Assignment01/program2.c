
#include<stdio.h>

void main() {

	int a = 10, b = 20;
	if((a && b++)&&(a++||++b)){
		printf("a :%d\n",a);
		printf("b :%d\n",b);
	}
	printf("Out Of If\n");
}

// here in this program we check two condition in first condition  it will check 'a' and
// it will post increment 'b' and in second condition it will post increment 'a' and pre increment 'b'
//mhanj
//((10  && 21)&&(11||21))
//he satisfy zala tarach 'a' ani 'b' chi value print kar
