





#include<stdio.h>

void main() {

        int l = 1;
        int h = 50;
        int num;


        while(l <= h) {
                if( l % 2 == 0 && l % 5 == 0)
		printf("Even numbers which are divisible by 5 are :%d\n",l);

             	l++;
        }

 //      printf("Even numbers which are divisible by 5 are :%d\n",l);
}


