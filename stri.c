#include <graphics.h>
int main()
{
 int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");
line(200,200,300,100);
line(300,100,400,200);
line(200,200,400,200);
getch();
closegraph();
return 0;
}