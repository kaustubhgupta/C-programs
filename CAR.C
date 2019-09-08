#include <graphics.h>
#include <conio.h>
 
main()
{
   int gd=DETECT,gm,points[]={320,150,420,300,250,300,320,150};
 
   initgraph(&gd, &gm, "C:\\TC\\BGI");
 
   drawpoly(4, points);
 
   getch();
   closegraph();
   return 0;
}