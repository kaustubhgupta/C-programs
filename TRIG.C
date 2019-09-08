#include<graphics.h>
main()
{
  int gd=DETECT, gm;
  int x,y;
  initgraph(&gd,&gm,"C:\\Turboc3\\BIG");
  x=getmaxx()/2;
  y=getmaxy()/2;
  line(x,y-50,x-40,y+40);
  line(x,y-50,x+40,y+40);
  line(x-40,y+40,x+40,y+40) ;
  getch();
  closegraph();

  return 0;
  }