
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
//#include<ioster>
#include <stdlib.h>
#include <math.h>


// function to put fill the grid block
// with specified color

void putPixel(int x,int y,int color)
{
	x= 320 + x*10;
	y= 240 - y*10;
	for(int i=1;i<10;i++)
		for(int j=1;j<10;j++)
			putpixel(x+i,y-j,color);
}


void drawGrid()
{
	for(int x=0;x<640;x+=10)
	{
		line(x,0,x,480);
	}
	for(int y=0;y<480;y+=10)
	{
		line(0,y,640,y);
	}
	//drawing the axis
	for(int i=-32;i<32;i++)
	{
		putPixel(i,0,1);
	}

	for(int j=-24;j<24;j++)
	{
		putPixel(0,j,1);
	}
}
void DDALine(int x1,int y1,int x2,int y2, int flag )
{
	int dx= (x2 > x1) ? (x2-x1) : (x1-x2);
	int dy= (y2 > y1) ? (y2-y1) : (y1-y2);

	int steps = (dx > dy) ? dx:dy;

	float x = x1;
	float y = y1;

	float xi = (float)(x2-x1)/steps;
	float yi = (float)(y2-y1)/steps;
	int rx,ry;
	for(int i=0; i<=steps;i++)
	{
		//doing round
		rx = (x > 0) ? floor(x + 0.5) : ceil(x - 0.5);
		ry = (y > 0) ? floor(y + 0.5) : ceil(y - 0.5);
		if(flag == 0)
		{
			putPixel(rx,ry,2);
		}
		else
		{
			printf("\nx=%f , y=%f",x,y);
		}

		x = x + xi;
		y = y + yi;


	}

	if(flag == 0
	){
		setcolor(RED);
		line(325+x1*10,235-y1*10,325+x2*10,235-y2*10);
	}

}

void fillPoly()

int main(void)
{
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
	int xmax, ymax;
	int  points[6][2];

	points[0][0]=1,points[0][1]=1;
	points[0][0]=1,points[0][1]=1;
	points[0][0]=1,points[0][1]=1;
	points[0][0]=1,points[0][1]=1;
	int x2=1,y2=8;
	int x3=6,y3=15;
	int x4=14,y4=10;
	int x5=14,y5=2;
	int x6=7,y6=8;


/*	printf("Point 1 - ");
	scanf("%d %d",&x1,&y1);
	printf("Point 2 - ");
	scanf("%d %d",&x2,&y2);
	printf("Point 3 - ");
	scanf("%d %d",&x3,&y3);
	printf("Point 4 - ");
	scanf("%d %d",&x4,&y4);
	printf("Point 5 - ");
	scanf("%d %d",&x5,&y5);
	printf("Point 6 - ");
	scanf("%d %d",&x6,&y6);
	printf("Point 7 - ");
	scanf("%d %d",&x7,&y7);
*/
	initgraph(&gdriver, &gmode, "");
	errorcode = graphresult();
	if (errorcode != grOk)
	{
		printf("Graphics error: %s\n", grapherrormsg(errorcode));
		exit(1);
	}
	drawGrid();

	DDALine(x1,y1,x2,y2,0);
	DDALine(x2,y2,x3,y3,0);
	DDALine(x3,y3,x4,y4,0);
	DDALine(x4,y4,x5,y5,0);
	DDALine(x5,y5,x6,y6,0);
	DDALine(x6,y6,x1,y1,0);


	getch();
	return 0;
}
