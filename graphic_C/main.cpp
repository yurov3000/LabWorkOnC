#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <math.h>

float f1 (float x){
 float res=pow(x-1, 2);
 return (res);
}
float f2 (float y){
 float res1=81;
 return (res1);
}
int main()
{
initwindow (1000,1000);
setcolor(15);

moveto (500,1000);
lineto (500,0);

moveto (0,500);
lineto(1000,500);

for (float i=-100;i<100;i=i+0.001){
 float x=i*20;
 float y=f1(i)*20;
 putpixel(x+502,-y+502,15);
}
for (float i=-100;i<100;i=i+0.001){
 float x=i*20;
 float y=f2(i)*20;
 putpixel(x+502,-y+502,15);
}
setfillstyle (1,10);
floodfill (501,499,15);
getch();
closegraph();
return 0;
}