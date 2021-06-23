/*
    developed by yohannes kassa yimam
    on 6-3-2019
    class assignment and lab exercises
*/
#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"");

   line(150,100,50,200);//l_roof
   line(150,100,250,200);//r_roof
   line(150,100,150,200);
   line(50,200,250,200);// bobroof
   line(75,200,75,300);
   line(225,200,225,300);
   line(75,300,225,300);
   line(130,250,130,300);//l door
   line(175,250,175,300);// r door
   line(130,250,175,250);// door bar
   line(90,220,110,220);// top window
    line(90,240,110,240); //bottom window
    line(90,220,90,240);// l window
    line(110,220,110,240);// r window
   getch();
   closegraph();
    return 0;
}
