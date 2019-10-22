#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int x,y,x1,x2,y1,y2,midx,midy;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
midx=getmaxx()/2;
midy=getmaxy()/2;
bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
printf("Enter translation factors:");
scanf("%d%d", &x,&y);
printf("After translation:");
bar3d(midx+(x+50),midy-(y+100),midx+(x+60),midy-(y+90),5,1);
getch();
closegraph();
}