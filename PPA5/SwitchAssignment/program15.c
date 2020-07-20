

#include <stdio.h>

void main() {
	
	float a = 4.5f;
	switch((int)a) {
		case 1:
			printf("Case 1\n");
			break;
		case 2:
			printf("Case 2\n");
			break;
		case 4:
			printf("Case 4\n");
			break;
		default:
			printf("Default case\n");
			break;
	}
}

// ethe aapn 'a'la float value assign keliye aani switch mde aapn ti value int la type cast karto mhanun a chi value 4 consider karte ani case 4 execute karto
