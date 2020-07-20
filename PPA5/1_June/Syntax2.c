


#include<stdio.h>
void main() {

        int a = 5, b = 6, ans = 0;

        ans = a++-b;
        // ans = a++-b  yala tokanizer mhantat n he lexical analysis
        printf("Post = %d %d %d \n",a,b,ans);
}

