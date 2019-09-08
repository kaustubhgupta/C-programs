#include<graphics.h>
main()
{
  int gd=DETECT, gm;
  int x,y;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  x=getmaxx()/2;
  y=getmaxy()/2;
  line(x+100,y,x-100,y);
  getch();
  closegraph();
  return 0;
}