#include<graphics.h>
main()
{
  int gd=DETECT, gm;
  int x,y;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  x=getmaxx()/2;
  y=getmaxy()/2;
  rectangle(x-80,y-50,x+80,y+50);
  getch();
  closegraph();
  return 0;
}