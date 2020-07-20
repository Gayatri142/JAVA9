

#include<stdio.h>

void main() {

        char lb, ub;

        printf("Enter Lower Bound :\n");
        scanf("%c",&lb);

        printf("Enter Upper Bound :\n");
        scanf(" %c",&ub);

        while(lb <= ub) {

                if(lb=='a'||lb=='e'||lb=='i'||lb=='o'||lb=='u'||lb=='A'||lb=='E'||lb=='I'||lb=='O'||lb=='U') {
                        printf("%c is Vowel\n",lb);
                }else{
                        printf("%c is Consonant\n",lb);
                }

                lb++;
        }


}


