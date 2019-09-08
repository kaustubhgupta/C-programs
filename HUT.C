#include<graphics.h>
main()
{
  int gd=DETECT, gm;
  int x,y;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  x=getmaxx()/2;
  y=getmaxy()/2;
  rectangle(x-20,y-20,x+20,y+20);
  line(x,y-20,x,y+20);
  line(x-20,y,x+20,y);
  rectangle(x-70,y-50,x+70,y+50);
  rectangle(x-120,y-50,x-70,y+50);
  line(x-120,y-50,x-95,y-90);
  line(x-95,y-90,x-70,y-50);
  line(x-95,y-90,x+35,y-90);
  line(x+35,y-90,x+70,y-50);
  rectangle(x-110,y,x-80,y+50);
  circle(x-95,y-60,10);
  getch();
  closegraph();
  return 0;
  }