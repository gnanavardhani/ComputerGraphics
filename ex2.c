#include<stdio.h> 
#include<math.h>
#include<graphics.h> 
int main() 
{
    int x,y,r;
    printf("enter the center point (x y co-ordinates) : ");
    scanf("%d %d",&x,&y);
    printf("enter the radius (r) : ");
    scanf("%d",&r);
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	float X=x; 
	float Y=y;
	int i=0;
	while(i<=360)
	{
    	putpixel (round(X),round(Y),BLUE);
    	X=x+r*cos(i);
    	Y=y+r*sin(i);
    	i=i+1;	
		delay(5);
	}
    delay(500000); 
    closegraph(); 
    return 0;
}

