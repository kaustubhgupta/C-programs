#include<graphics.h>
main()
{
  int gd=DETECT, gm;
  int x,y;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  x=getmaxx()/2;
  y=getmaxy()/2;
  circle(x,y,100);
  getch();
  closegraph();
  return 0;
}