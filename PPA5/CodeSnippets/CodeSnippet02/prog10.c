
#include<stdio.h>
void main() {
	int x = 4, y, z;
	y = --x;
	z = x--;
	printf("%d, %d, %d\n", x, y, z);
}
