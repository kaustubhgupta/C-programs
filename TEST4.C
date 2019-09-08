#include<graphics.h>
main()
{
  int gd=DETECT, gm;
  int x,y;
  initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
  x=getmaxx()/2;
  y=getmaxy()/2;
  //person
  line(x,y-40,x,y+40);
  line(x,y+40,x+30,y+80);
  line(x,y+40,x-30,y+80);
  line(x+30,y+80,x+40,y+80);
  line(x-30,y+80,x-40,y+80);
  circle(x,y-70,30);
  line(x,y,x+20,y-20);
  line(x,y,x-35,y-30);
  line(x-35,y-30,x-15,y-60);
  arc(x,y-60,180,0,10);
  circle(x+10,y-75,5);
  circle(x-10,y-75,5);
  line(x+50,y,x+70,y);
  //s
  line(x+50,y,x+50,y+20);
  line(x+50,y+20,x+70,y+20);
  line(x+70,y+20,x+70,y+40);
  line(x+70,y+40,x+50,y+40);
  //o
  line(x+80,y,x+100,y);
  line(x+80,y,x+80,y+40);
  line(x+80,y+40,x+100,y+40);
  line(x+100,y+40,x+100,y);
  //o
  line(x+110,y,x+130,y);
  line(x+110,y,x+110,y+40);
  line(x+130,y+40,x+110,y+40);
  line(x+130,y+40,x+130,y);
  //r
  line(x+140,y,x+140,y+40);
  line(x+140,y,x+160,y);
  line(x+160,y,x+160,y+20);
  line(x+160,y+20,x+140,y+20);
  line(x+140,y+20,x+160,y+40);
  //y
  line(x+170,y,x+180,y+20);
  line(x+170,y+40,x+180,y+20);
  line(x+180,y+20,x+190,y);



  getch();
  closegraph();

}