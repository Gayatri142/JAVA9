


#include <stdio.h>

void main() {
	
	int a = 4;
	switch(a) {
		
		case 1:
			printf("Hello\n");
			break;
		case 4:
			printf("Hii\n");
			break;
		case 2+2:
			printf("Case 4\n");
			break;
		default:
			printf("Default case\n");
	}	
}

// here it gives error because a = 4 and execute case 4 then it goes to next line then it will again see that 2+2=4 sot  gives an error as duplicate case value error
