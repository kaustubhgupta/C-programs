#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
int x,y;
initgraph(&gd,&gm,"../bgi");
x=getmaxx()/2;
y=getmaxy()/2;
circle(x,y,50);
getch();
closegraph();
return 0;
}