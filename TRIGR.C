#include <graphics.h>
#include <conio.h>
 
main()
{
   int gd=DETECT,gm;
   int x,y;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   x=getmaxx()/2;
   y=getmaxy()/2;
   line(x,y-20,x-40,y+60);
   line(x,y-20,x+40,y+60);
   line(x-40,y+60,x+40,y+60);
   getch();
   closegraph();
   return 0;
}