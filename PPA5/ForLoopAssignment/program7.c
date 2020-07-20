

#include<stdio.h>

void main() {

	int n,m;

	printf("Enter Starting Number :\n");
	scanf("%d",&n);


	printf("Enter End Number :\n");
	scanf("%d",&m);
	


	for(int i = n; i <= m; i++) {
		printf("%d * %d =%d\n",n,i, n * i);
	}
}
