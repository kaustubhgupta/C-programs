#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"../bgi");
rectangle(100,150,200,300);
getch();
closegraph();
return 0;
}