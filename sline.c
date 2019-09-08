#include <graphics.h>
int main()
{
 int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");
line(150,150,400,150);
getch();
closegraph();
return 0;
}