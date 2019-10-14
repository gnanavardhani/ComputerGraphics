#include<stdio.h> 
#include<graphics.h> 
int modulus(int n)
{
	if(n>0)
	 return (n);
	else 
	 return(n * (-1));
} 
int main() 
{
    int x0,y0,x1,y1;
    printf("enter the initial point (x y co-ordinates) : ");
    scanf("%d %d",&x0,&y0);
    printf("\nenter the final point (x y co-ordinates) : ");
    scanf("%d %d",&x1,&y1);
    int dx = x1 - x0; 
	int dy = y1 - y0;
	float slope=((float) dy / (float) dx);
	printf("%f",slope);
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	float x = x0;
	float y = y0;
	float xinc,yinc;
	if(dx!=0)
	{
		if(x0>x1)
			xinc=(-1);
		else
			xinc=(1);
		float p=modulus(slope);
		if(y0>y1)
			yinc=-p;
		else
			yinc=p;
		int flag=1;
		float z;
		while(flag==1)
		{
	    	putpixel (x,y,BLUE);
	    	x=x+xinc;
	    	y=y+yinc;
	    	if(y-(int)y>=0.5)
		   		y=(int)y+1;
	    	else 
		  	    y=(int)y;	
			if(x==x1 && y==y1)
				flag=0;
			delay(5);
		}
	}
	else if(dx==0)
	{
		float yinc;
		int flag=1;
		if(y0>y1)
			yinc=-1;
		else
			yinc=1;
      	while(flag==1)
		{
	    	putpixel (x,y,BLUE);
	    	x=x+0;
	    	y=y+yinc;
	    	if(y-(int)y>=0.5)
		   		y=(int)y+1;
	    	else 
		  	    y=(int)y;	
			if(x==x1 && y==y1)
				flag=0;
			delay(5);
		}
	}
    delay(500000); 
    closegraph(); 
    return 0;
}

