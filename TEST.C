
#include<graphics.h>
#include<conio.h>
main()
{
  int gd=DETECT, gm;
  initgraph(&gd,&gm,"../bgi");
  line(100,100,200,200);
  closegraph();
  getch();
  return 0;
}