


#include<stdio.h>
int main(){
	float a = 5.2;

	switch((int)a){
		
		case 1:
			printf("one\n");
			break;
		case 5:
			printf("five\n");
			break;
		case 2:
			printf("two\n");
			break;
		default:
			printf("else\n");
			break;
	}
}

// ethe aapn 'a' chi value float ashi define keli aahe ani switch mde detana int(a) ashi dili aahe jeva aapn float la int mde convert karaycha try karto teva data loss hou shakto ethe pan same tasch zalay 5.2 la int mde convert kartana .2 he value loss hote mhanun ethe case'5' execute hote
