#include <graphics.h>
int main()
{
 int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");
rectangle(150,250,450,350);
getch();
closegraph();
return 0;
}