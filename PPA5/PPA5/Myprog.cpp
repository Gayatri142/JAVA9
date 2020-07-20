#include<iostream>
#include<math.h>
#include<graphics.h>
using namespace std;
int main()
{
int gd=DETECT;gm=VGAMAX;
int r,x,y;
initgraph(&gd,&gm,NULL);
cout<<"\nEnter values of points and radius=";
cin>>r>>x>>y;
circle(r,x,y);
getch();
delay(10000);
closegraph();
}
