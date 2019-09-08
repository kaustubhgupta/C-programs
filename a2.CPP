#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
 initgraph(&gd,&gm,"../bgi");
 line(100,150,300,150);
 getch();
 closegraph();
 return 0;
 }