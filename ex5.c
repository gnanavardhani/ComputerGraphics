#include<stdio.h> 
#include<graphics.h> 
#include<math.h>
int main() 
{ 
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, NULL);
    circle(235,265,3);  
    rectangle(225,230,275,300);
    line(270,300,270,230);
    rectangle(310,220,370,255);
    rectangle(315,225,365,250);
    line(340,225,340,250);
    line(200, 200, 200, 300);
    line(200, 300, 400, 300);
    line(400, 200, 400, 300);
    line(185, 200, 415, 200);    
    line(415,220,415,250);
    line(440,210,440,240);
    line(440,210,415,220);
    line(440,240,415,250);

    rectangle(325,110,370,145);
    line(320,110,375,110);
    line(320,110,325,100);
    line(375,110,370,100);
    line(370,100,325,100);
    line(325,100,330,95);
    line(370,100,375,95);
    line(375,95,382,102);
    line(382,102,375,110);

    line(375,95,330,95);
    line(370,145,378,140);
    line(378,140,378,106);

    line(185, 200, 210, 150);

    line(415, 200, 395, 150);
    line(210, 150, 395, 150);

    line(415, 200, 460, 175);
    line(395, 150, 430, 135);

    line(430, 135, 460, 175);

    line(325,135, 245, 135);
    
    line(430,135,378,135);

    line(245, 135, 210, 150);

    line(400, 300, 450, 275);
    line(450, 275, 450, 182);
    line(450,158,450,65);
    line(455,168,550,128);

   //draw trapizium
    line(470,90,470,120);
    line(530,65,530,90);
    line(470,90,530,65);
    line(470,120,530,90);
    //back window
    line(470,190,470,220);
    line(530,165,530,190);
    line(470,190,530,165);
    line(470,220,530,190);

    line(450,65,240,65);
    line(550,25,340,25);
    line(240,65,240,137);
    line(240,25,340,25);
    line(240,25,130,85);
    line(200,85,240,65);

    line(200,300,130,300);
    line(130,300,130,85);

    line(130,85,200,85);
    line(200,85,200,167);
    
    rectangle(150,105,180,135);
    rectangle(150,215,180,245);


    line(130,192,188,192);
    line(450,65,550,25);
    line(550,225,450,275);
    line(550,225,550,25);
    delay(500000); 
    closegraph(); 
    return 0; 
} 