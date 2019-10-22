#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int xs,c,ys,zs,o,x1,x2,y1,y2,midx,midy,xt,yt;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
midx=getmaxx()/2;
midy=getmaxy()/2;
printf("**made by kaustubh**");
printf("\t\n3D transformations:\n");
bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
do
{
 printf("\n1.Scaling\n2.Rotation\n3.Translation\n4.Exit\nEnter Your Choice:");
 scanf("%d",&c);
 switch(c)
 {
 case 1:
	printf("Enter scaling factors");
	scanf("%d%d%d", &xs,&ys,&zs);
	bar3d(midx+(xs*50),midy-(ys*100),midx+(xs*60),midy-(ys*90),5*zs,1);
	getch();
	break;
 case 2:printf("Enter rotating angle");
	scanf("%d",&o);
	x1=50*cos(o*3.14/180)-100*sin(o*3.14/180);
	y1=50*sin(o*3.14/180)+100*cos(o*3.14/180);
	x2=60*cos(o*3.14/180)-90*sin(o*3.14/180);
	y2=60*sin(o*3.14/180)+90*cos(o*3.14/180);
	printf("\nRotation  about z axis");
	bar3d(midx+x1,midy-y1,midx+x2,midy-y2,5,1);
	getch();
	printf("\nRotation  about x axis");
	bar3d(midx+50,midy-x1,midx+60,midy-x2,5,1);
	getch();
	printf("\nRotation about y axis");
	bar3d(midx+x1,midy-100,midx+x2,midy-90,5,1);
	getch();
	break;
 case 3:printf("Enter translation factors:");
	scanf("%d%d", &xt,&yt);
	bar3d(midx+(xt+50),midy-(yt+100),midx+(xt+60),midy-(yt+90),5,1);
	getch();
	break;
 case 4:exit(0);
 default: printf("Enter valid choice");
 }
 }while(c!=4);
closegraph();
}