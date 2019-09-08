#include <graphics.h>
int main()
{
 int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");
line(200,200,300,100);
line(300,100,400,200);
line(200,200,400,200);
rectangle (200,200,400,400);
rectangle (250,325,350,400);
line(300,100,510,100);
line(400,200,600,200);
line(510,100,600,200);
rectangle (400,200,600,400);
circle (295,160,20);
getch();
closegraph();

return 0;
}