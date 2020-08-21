#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
      int gdriver=DETECT,gmode,u;
      initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
      for(u=2;u<=7;u++)
      {
      setcolor(u);
      settextstyle(0,0,u);
      outtextxy(30-2*u,120-2*u,"WELCOME  TO");
      outtextxy(30-2*u,200-2*u," KBC GAME ");
      delay(500);
      cleardevice();
      }
      cleardevice();
      setcolor(RED);
      settextstyle(1,0,4);
      outtextxy(150,100,"Project Made By");
      delay(2000);
      setcolor(BLUE);
      outtextxy(150,200,"YASH THAKARE");
      delay(600);
      getch();
}
