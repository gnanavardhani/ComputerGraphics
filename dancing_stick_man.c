#include<stdio.h> 
#include<math.h>
#include<graphics.h>
int main() 
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
    int i=0;
    int c=1;
    int x,y,cpx=300,cpy=200;
    int nx=300,ny=210;
    int mx=300,my=240;
    int rex=285,rey=220;
    int lex=315,ley=220;
    int rlx=290,rly=260;
    int llx=310,lly=260;
                //setbkcolor(MAGENTA);
    while(i<=16)
    {
        c=-c;
        cpx=300+c;
        //head nod
        circle(cpx,cpy,10);
        if(i<=4)
        {

            line(nx,ny,mx,my);
            line(nx,ny,rex,rey);
            line(nx,ny,lex,ley);
            line(mx,my,rlx,rly);
            line(mx,my,llx,lly);
            //hands
            line(rex,rey,270,220+(c*10));
            line(lex,ley,330,220);
            //legs
            line(rlx,rly,280,280);
            line(llx,lly,320,280); 

        }
        else if(i>4 && i<=8)
        {
            line(nx,ny,mx,my);
            line(nx,ny,rex,rey);
            line(nx,ny,lex,ley);
            line(mx,my,rlx,rly);
            line(mx,my,llx,lly);
            //hands
            line(rex,rey,270,220);
            line(lex,ley,330,220+(c*10));
            //legs
            line(rlx,rly,280,280);
            line(llx,lly,320,280);    
        }
        else if(i>8 && i<=12)
        {
          //fixed 
            line(nx,ny,mx,my);
            line(nx,ny,rex,rey);
            line(nx,ny,lex,ley);
            line(mx,my,rlx,rly);
            line(mx,my,llx,lly);
            //hands
            line(rex,rey,270,220+(c*10));
            line(lex,ley,330,220+(-c*10));
            if(i%2==0)
            {
              line(rlx,rly,280,260+(c*20));
              line(llx,lly,300,260);
            }
            else
            {
              line(rlx,rly,300,260);
              line(llx,lly,320,260+(c*20));
            }
        }
        else if(i>12 && i<=16)
        {
            //fixed 
            line(nx,ny,mx,my);
            line(nx,ny,rex,rey);
            line(nx,ny,lex,ley);
            line(mx,my,rlx,rly);
            line(mx,my,llx,lly);
            //hands
            line(rex,rey,270,220+(c*10));
            line(lex,ley,330,220+(-c*10));
            //legs
            line(rlx,rly,280,260+(-c*20));
            line(llx,lly,320,260+(c*20)); 
        }
       /*else if (i>16 && i<=20)
        {
            line(nx,ny,mx,my);

        }*/
        delay(150);
        i=i+1;
        cleardevice();
    }
    delay(5000000); 
    closegraph(); 
    return 0;
}

