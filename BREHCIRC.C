#include<stdio.h>
#include<graphics.h>
void draw(int xc, int yc, int x, int y)
{
	putpixel(xc+x, yc+y, WHITE);
	putpixel(xc-x, yc+y, WHITE);
	putpixel(xc+x, yc-y, WHITE);
	putpixel(xc-x, yc-y, WHITE);
	putpixel(xc+y, yc+x, WHITE);
	putpixel(xc-y, yc+x, WHITE);
	putpixel(xc+y, yc-x, WHITE);
	putpixel(xc-y, yc-x, WHITE);
}


void bres(int xc, int yc, int r)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;
	draw(xc, yc, x, y);

	while (x <= y)
	{
		x++;

		if (d > 0)
		{
			y--;
			d = d + 4 * (x - y) + 10;
		}
		else
			d = d + 4 * x + 6;

		draw(xc, yc, x, y);
		delay(50);
	}
}

int main()
{
	int xc = 150, yc = 150, r;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C://TURBOC3/BGI");
	printf("\n Enter the Radius : ");
	scanf("%d",&r);
	bres(xc, yc, r);
	getch();
	return 0;
}
