#include<graphics.h>
main()
{
 int gd=DETECT, gm;
 int x,y;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 x=getmaxx()/2;
 y=getmaxy()/2;
 setfillstyle(SOLID_FILL,BLUE);
 rectangle(x-150,y-150,x+150,y+150);
 floodfill(x,y,WHITE);																																																																																																																											;
 getch();
 closegraph();
}