#include<graphics.h>
void main()
{
  int gd=DETECT,gm;
  int x,y;
  initgraph(&gd,&gm,"C:\\Turboc3\\BIG");
  x=getmaxx()/2;
  y=getmaxy()/2;
  setcolor(10);
  line(x-150,y,x+150,y);
  line(x,y-150,x,y+150);
  line(x,y-150,x+150,y-150);
  line(x,y+150,x-150,y+150);
  line(x+150,y,x+150,y+150);
  line(x-150,y,x-150,y-150);
  getch();
  closegraph();
}