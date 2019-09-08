#include <graphics.h>
int main()
{
 int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");
circle(300,150,90);
getch();
closegraph();
return 0;
}