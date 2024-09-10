#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

int main()

{

int gd=DETECT,gm,i,j,Factor,x=140;
printf("Enter a Number:");
scanf("%d",&Factor);
delay(1000);
initgraph(&gd,&gm, "C:\\TC\\BGI");

if ((Factor%2)==0) {
  printf("RYU WINS");
  delay(1000);
  
for (i=0;i<34;i+=2){

delay(300);

cleardevice();
//getch();

//Jin Kazama
setcolor(RED);
//head and torso
circle(100,75,25);

line(100,100,100,200);

//arms
//right
line(100,110,140+i,140-i);

line(170+i+2,110,140+i,140-i);
//left
line(100,110,60-i,140-i/2);

line(110-i,130,60-i,140-i/2);

//legs
line(100,200,140,240);

line(140,240,160,290);

line(100,200,60,240);

line(60,240,50,290);


//Ryu Kendo
setcolor(BLUE);
//head and torso
circle(100+x,75,25);

line(100+x,100,100+x,200);

//arms

//left
line(100+x,110,130+i+x,140-i/3);

line(90+i+x,120,130+i+x,140-i/3);

//right
line(100+x,110,60+x-i/2,80);

line(20+x-i,80,60+x-i/2,80);

//legs
line(100+x,200,140+x,240);

line(140+x,240,160+x,290);

line(100+x,200,60+x,240);

line(60+x,240,50+x,290);

}
/////////////////////////////////////////////////////////////////////////////////////////////////////
} else if (Factor==69) {
  printf("THAT HURT!");
  delay(1500);
  x=120;
for (i=0,j=0;i<34;i+=2,j+=3){

delay(300);

cleardevice();
//getch();

//Jin Kazama
setcolor(RED);
//head and torso
circle(100-i,75,25);

line(100-i,100,100,200);

//arms
//right
line(100-i,110,140-i,140-i);

line(170-i+2,110,140-i,140-i);
//left
line(100-i,110,60-i,140-i/2);

line(110-i,130,60-i,140-i/2);

//legs
line(100,200,140,240);

line(140,240,160,290);

line(100,200,60,240);

line(60,240,50,290);


//Ryu Kendo
setcolor(BLUE);
//head and torso
circle(100+x,75,25);

line(100+x,100,100+x,200);

//arms

//left
line(100+x,110,130+x,140);

line(90+x,120,130+x,140);

//right
line(100+x,110,60+x-i,80);

line(20+x-i,80,60+x-i,80);

//legs
line(100+x,200,140+x,240);

line(140+x,240,160+x,290);

line(100+x,200,60+x-i,240-i);

line(60+x-i,240-i,50+x-i-j,290-i-j);


}
//////////////////////////////////////////////////////////////////////////////////////////////////////
} else if ((Factor%3)==0 && Factor!=69) {
  printf("CLOSE CALL!");
  delay(1500);
  x=158;
for (i=0,j=0;i<45;i+=2,j+=2){

delay(400);

cleardevice();
//getch();

//Jin Kazama
setcolor(RED);
//head and torso
circle(100+i,75+i,25);

line(100+i,100+i,100,200);

//arms
//right
line(100+i,110+i,140+i+i,150-i+i);

line(170+i+i,110+i,140+i+i,150-i+i);
//left
line(100+i,110+i,60-i+i,140-i/2+i);

line(110-i+i,130+i,60-i+i,140-i/2+i);

//legs
line(100,200,140,240);

line(140,240,160,290);

line(100,200,60,240);

line(60,240,50,290);


//Ryu Kendo
setcolor(BLUE);
//head and torso
circle(100+x,75,25);

line(100+x,100,100+x,200);

//arms

//left
line(100+x,110,130+i+x,140-i/3);

line(90+i+x,120,130+i+x,140-i/3);

//right
line(100+x,110,60+x-i/2,80);

line(20+x-i,80,60+x-i/2,80);

//legs
line(100+x,200,140+x,240);

line(140+x,240,160+x,290);

line(100+x,200,60+x,240);

line(60+x,240,50+x,290);


}

///////////////////////////////////////////////////////////////////////////////////////////////
} else {
  printf("JIN WINS");
  delay(1500);
  x=140;
for (i=0,j=0;i<34;i+=2,j+=3){

delay(300);

cleardevice();
//getch();

//Jin Kazama
setcolor(RED);
//head and torso
circle(100-i,75,25);

line(100-i,100,100,200);

//arms
//right
line(100-i,110,140-i,140-i);

line(170-i+2,110,140-i,140-i);
//left
line(100-i,110,60-i,140-i/2);

line(110-i,130,60-i,140-i/2);

//legs
line(100,200,140+i,240-i-j);

line(140+i,240-i-j,160+i+j,290-i-j-j);

line(100,200,60,240);

line(60,240,50,290);


//Ryu Kendo
setcolor(BLUE);
//head and torso
circle(100+x,75,25);

line(100+x,100,100+x,200);

//arms

//left
line(100+x,110,130+i+x,140-i/3);

line(90+i+x,120,130+i+x,140-i/3);

//right
line(100+x,110,60+x-i/2,80);

line(20+x-i,80,60+x-i/2,80);

//legs
line(100+x,200,140+x,240);

line(140+x,240,160+x,290);

line(100+x,200,60+x,240);

line(60+x,240,50+x,290);


}
}


} 