#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"../bgi");
line(150,100,100,50);
line(100,50,50,100);
line(50,100,150,100);
rectangle(50,100,150,300);
line(100,50,350,50);
line(400,100,150,100);
line(350,50,400,100);
rectangle(150,100,400,300);
rectangle(85,300,115,200);
rectangle(250,180,300,210);
line(275,180,275,210);


getch();
closegraph();
return 0;
}