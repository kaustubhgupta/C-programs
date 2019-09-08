#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm,points[]={200,80,120,150,300,150,300,80,200,80},
array[]={330,80,330,150,470,150,470,80,330,80};
initgraph(&gd,&gm,"../bgi");
line(200,50,500,50);
line(500,50,600,200);
line(600,200,600,250);
line(600,250,500,250);
arc(450,250,0,180,50);
line(400,250,300,250);
arc(250,250,0,180,50);
line(200,50,100,150);
line(100,150,50,200);
line(50,200,50,250);
line(50,250,200,250);
circle(450,260,40);
circle(250,260,40);
drawpoly(5,points);
drawpoly(5,array);
/*
setfillstyle(SOLID_FILL,GREEN);
floodfill(250,260,WHITE);
floodfill(450,260,WHITE);
setfillstyle(SOLID_FILL,WHITE);
floodfill(300,200,WHITE);
setfillstyle(SOLID_FILL,BLACK);
floodfill(210,81,WHITE);
setfillstyle(SOLID_FILL,BLACK);
floodfill(340,85,WHITE);
*/
getch();
closegraph();
return 0;
}
