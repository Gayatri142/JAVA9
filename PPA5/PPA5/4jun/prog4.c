#include<stdio.h>

void main(){
		int x=12,y=13,ans=0;

		printf("x= %d \n y=%d",x,y);

		ans=x>y;
		printf("%d\n",ans);
		
		ans=x<y;
		printf("%d\n",ans);
		
		ans= x>=y;
		printf("%d\n",ans);

		ans = x<=y;
		printf("%d\n",ans);

		ans=x == y;
		printf("%d\n",ans);

		ans = x !=y;
		printf("%d\n",ans);

}
