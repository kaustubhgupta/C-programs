#include<stdio.h>
#include<conio.h>
struct date
{
int day;
int mon;
int yr;
};
struct date input()
{
struct date d;
printf("\nEnter the day : ");
scanf("%d",&d.day);
printf("\nEnter the month : ");
scanf("%d",&d.mon);
printf("\nEnter the year : ");
scanf("%d",&d.yr);
return d;
}
void out31(struct date d)
{
if(d.day<=15)
{
d.day=d.day+45;
d.day=d.day%31;
d.mon++;
}
else
{
d.day=d.day+45;
d.day=d.day%31;
d.mon+=2;
}
if(d.mon>12)
{
    d.mon=d.mon%12;
    d.yr++;
}
if(d.mon==5||d.mon==7||d.mon==8||d.mon==10||d.mon==12)
{
    d.day++;
}
if(d.mon==3&& (d.yr%4==0)&&d.day>28)
{
    d.day+=2;
}
if(d.mon==3&& (d.yr%4!=0))
{
    d.day+=3;
}
printf("%d-%d-%d",d.day,d.mon,d.yr);
}
void out30(struct date d)
{
    if(d.mon==2&& d.day<=15&&d.yr%4==0)
    {
        d.day=d.day+45;
        d.day=d.day%29;
        d.mon++;
    }
    else{
    if(d.mon==2&& d.day<=15&&d.yr%4!=0)
    {
        d.day=d.day+45;
        d.day=d.day%28;
        d.mon++;
    }
     else{if(d.mon==2&& d.day>15&&d.yr%4==0)
    {
        d.day=d.day+45;
        d.day=d.day%29;
        d.day--;
        d.mon+=2;
    }
    else{
    if(d.mon==2&& d.day>15&&d.yr%4!=0)
    {
        d.day=d.day+45;
        d.day=d.day%28;
        //printf("\n%d",d.day);
        d.day=d.day-2;
        d.mon+=2;
    }
    else{
if(d.day<=15)
{
d.day=d.day+45;
d.day=d.day%30;
d.mon++;
}
else
{
d.day=d.day+45;
d.day=d.day%30;
d.mon+=2;
}}}}}
if(d.mon>12)
{
    d.day--;
    d.mon=d.mon%12;
    d.yr++;
}
if(d.mon==4||d.mon==6||d.mon==8||d.mon==9||d.mon==11)
{
    d.day--;
}

printf("%d-%d-%d",d.day,d.mon,d.yr);
}

main()
{
struct date d;
d=input();
if(d.mon==1||d.mon==3||d.mon==5||d.mon==7||d.mon==8||d.mon==10||d.mon==12)
out31(d);
else
out30(d);
return 0;
}
