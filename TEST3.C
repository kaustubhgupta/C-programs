#include<graphics.h>
main()
{
  int gd=DETECT, gm;
  int x,y;
  initgraph(&gd,&gm,"C:\\Turboc3\\BIG");
  x=getmaxx()/2;
  y=getmaxy()/2;
  line(x-50,y-60,x+50,y-60); //1
  line(x+50,y-60,x+70,y-30); //2
  line(x+70,y-30,x+100,y-30); //3
  line(x+100,y-30,x+100,y+10); //4
 // line(x+100,y+10,x-100,y+10); //5
  line(x-100,y+10,x-100,y-30); //6
  line(x-100,y-30,x-50,y-60); //7
  line(x-30,y+10,x+30,y+10); //8
  line(x+100,y+10,x+80,y+10); //9
  line(x-100,y+10,x-80,y+10); //10
  arc(x-55,y+10,0,180,25);//a1
  arc(x+55,y+10,0,180,25);//a2
  arc(x-55,y+10,0,360,20);//t1
  arc(x+55,y+10,0,360,20);//t2
  line(x+20,y-30,x+60,y-30);//w1
  line(x+60,y-30,x+45,y-50);    //w2
  line(x+45,y-50,x+20,y-50);        //w3
  line(x+20,y-50,x+20,y-30);            //w4
  line(x-80,y-30,x+10,y-30);                //y1
  line(x+10,y-30,x+10,y-50);                    //y2
  line(x+10,y-50,x-50,y-50);                        //y3
  line(x-50,y-50,x-80,y-30);                            //y4

  // coloring starts:
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(x,y,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(x-55,y+10,WHITE);
  floodfill(x+55,y+10,WHITE);
  getch();
  closegraph();
}