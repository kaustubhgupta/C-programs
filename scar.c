#include <graphics.h>
int main()
{
 int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");
line(50,300,260,300);
line(100,300,125,270);
line(125,270,200,270);
line(200,270,215,300);
line(50,300,50,330);
line(260,300,260,330);
circle(115,330,15);
circle(115,330,2);
circle(195,330,15);
circle(195,330,2);
line(50,330,100,330);
line(130,330,180,330);
line(180,330,260,330);
line(163,270,163,300);
getch();
closegraph();
return 0;
}