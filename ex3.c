#include<stdio.h> 
#include<graphics.h> 
int main() 
{
    int x0,y0,x1,y1;
    printf("enter the initial point (x y co-ordinates) : ");
    scanf("%d %d",&x0,&y0);
    printf("\nenter the final point (x y co-ordinates) : ");
    scanf("%d %d",&x1,&y1);
    int dx = x1 - x0; 
	int dy = y1 - y0;
	int DV=dx-(2*dy);
	printf("%d \n",DV );
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	int flag=1;
	int x=x0;
	int y=y0;
	int xinc,yinc1,yinc2;
	if(x0>x1)
		xinc=(-1);
	else if(x1>x0)
		xinc=(1);
	else 
		xinc=0;
	if(y0>y1)
		{
			yinc1=-1;
			yinc2=0;
		}
	else
	{
		yinc1=0;
		yinc2=1;
	}
	while(flag==1)
		{
	    	putpixel (x,y,BLUE);
            x=x+xinc;
	    	if(DV>=0)
		   	{
		   		y=y+yinc1;
		   		DV=DV-(2*dy);
		   	}
		    else if(DV<0) 
		  	 {  
		  	    y=y+yinc2;
		  	    DV=DV-(2*(dy-dx));
		  	 }	
			if(x==x1 && y==y1)
				flag=0;
			delay(5);
		}
    delay(500000); 
    closegraph(); 
    return 0;
}

