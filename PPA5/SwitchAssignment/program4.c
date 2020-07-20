

#include <stdio.h>

int main() {

	int x = 2;
	switch(x<< (x + 1)) {
		
		default:
			printf("\ndefault");
		case 1:
			printf("\n1");
			break;
		case 2:
			printf("\n2");
			break;
		case 3:
			printf("\n3");
			break;
		case 4:
			printf("\n4");
			break;
		case 8:
			printf("\n8");
			break;
	}
	
return 0;
}

// ethe switch chi condition false  hote mg cursor switch mde aat yeto tr pahili lable default aahe mg to default execute karto ani default la aapn break dila nai so jopryant break milat nai topryant case label ignore karto ani statement execute karto jeva break milel teva to tithun pudhache statement print karat nai  mhanun ethe output default ani 1 as yet
