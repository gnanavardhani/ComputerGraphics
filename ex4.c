#include<stdio.h> 
#include<math.h>
#include<graphics.h> 
int main() 
{
    int x_c,y_c,r;
    printf("enter the center point (x y co-ordinates) : ");
    scanf("%d %d",&x_c,&y_c);
    printf("enter the radius (r) : ");
    scanf("%d",&r);
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
    int x=0,y=r;
    int d=3-2*r;
	while(y>=x)
	{
        putpixel(x_c+x,y_c+y,BLUE);
        delay(15);
        putpixel(x_c-x,y_c+y,BLUE);
        delay(15);
        putpixel(x_c+x,y_c-y,BLUE);
        delay(15);
        putpixel(x_c-x,y_c-y,BLUE);
        delay(15);
        putpixel(x_c+y,y_c+x,BLUE);
        delay(15);
        putpixel(x_c-y,y_c+x,BLUE);
        delay(15);
        putpixel(x_c+y,y_c-x,BLUE);
        delay(15);
        putpixel(x_c-y,y_c-x,BLUE);
        delay(15);
        x=x+1;
        if(d>0)
        {
            y--;
            d=d+4*(x-y)+10;
        }	
        else
            d=d+4*x+6;
        
	}
    delay(500000); 
    closegraph(); 
    return 0;
}

