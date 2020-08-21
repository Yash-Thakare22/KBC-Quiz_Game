//Implemented a Quiz Game - KBC in C 

#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct kbc
{
	char a[100];
}kbc;

//global variables
int g=0,x=0,y=0,z=0,s;
//function prototype declaration
  int selectfunction();
  void logo();
  void winner();
  void loser();
  void lifeline();
  int correctanswer();
  void q1();
  void q2();
  void q3();
  void q4();
  void q5();
  void q6();
  void q7();
  void q8();
  void structure();
  void optionA(int ans);
  void optionB(int ans);
  void optionC(int ans);
  void optionD(int ans);
      void main()
      {
      int gdriver=DETECT,gmode,u;
      initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
      for(u=0;u<300;u++)
      {
	cleardevice();
	settextstyle(1,0,2);
	outtextxy(250,200,"Loading...");
	rectangle(145,230,455,255);
	rectangle(141,236,451,248);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(146,231,getmaxcolor());
	ellipse(149+u,242,270,90,6,6);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(150+u,242,getmaxcolor());
	delay(10);
	}
	cleardevice();
	logo();
	cleardevice();
	q1();
  }
   void structure()
   {
   setbkcolor(BLUE);
   //for question box
   line(0,280,100,280);
   line(540,280,640,280);
   line(130,250,510,250);
   line(130,310,510,310);
   line(100,280,130,250);
   line(510,250,540,280);
   line(100,280,130,310);
   line(510,310,540,280);
   //option box
   //a
   line(130,340,280,340);
   line(130,370,280,370);
   line(100,355,130,340);
   line(100,355,130,370);
   line(280,340,310,355);
   line(280,370,310,355);
   line(100,355,0,355);
   //b
   line(360,340,510,340);
   line(360,370,510,370);
   line(330,355,360,340);
   line(510,340,540,355);
   line(330,355,360,370);
   line(510,370,540,355);
   line(540,355,1000,355);
   line(310,355,330,355);
   //c
   line(130,380,280,380);
   line(130,410,280,410);
   line(100,395,130,380);
   line(280,380,310,395);
   line(100,395,130,410);
   line(280,410,310,395);
   line(0,395,100,395);
   //d
   line(360,380,510,380);
   line(360,410,510,410);
   line(330,395,360,380);
   line(510,380,540,395);
   line(330,395,360,410);
   line(510,410,540,395);
   line(540,395,1000,395);
   line(310,395,330,395);
   //status box
   line(450,10,630,10);
   line(450,10,450,30);
  line(450,30,630,30);
  line(630,10,630,30);
  line(460,50,620,50);
  line(460,50,460,30);
  line(620,50,620,30);
  line(470,70,610,70);
  line(470,70,470,50);
  line(610,70,610,50);
  line(480,90,600,90);
  line(480,90,480,70);
  line(600,90,600,70);
  line(490,110,590,110);
  line(490,110,490,90);
  line(590,110,590,90);
  line(500,130,580,130);
  line(500,130,500,110);
  line(580,130,580,110);
  line(510,150,570,150);
  line(510,150,510,130);
  line(570,150,570,130);
  line(520,170,560,170);
  line(520,170,520,150);
  line(560,170,560,150);
  // life line box
  rectangle(465,190,615,220);
  ellipse(540,205,0,360,20,10);
  ellipse(495,205,0,360,20,10);
  ellipse(585,205,0,360,20,10);
  //audience pole
  circle(585,200,5);
  circle(575,203,5);
   circle(595,203,5);
   ellipse(585,215,0,180,5,10);
   //expert advice
   circle(495,200,5);
   ellipse(495,215,0,180,5,10);
   settextstyle(0,0,0);
   outtextxy(540,200,"50");
   outtextxy(525,160,"1,000");
   outtextxy(516,140,"10,000");
   outtextxy(508,120,"1,00,000");
      outtextxy(505,100,"10,00,000");
      outtextxy(503,80,"1,00,00,000");
      settextstyle(7,0,1);
      outtextxy(481,50,"3,00,00,000");
      outtextxy(483,30,"5,00,00,000");
      outtextxy(483,8,"7,00,00,000");
      settextstyle(2,0,4);
      rectangle(170,10,445,165);
      circle(310,88,60);
      circle(310,88,50);
      setfillstyle(9,YELLOW);
      floodfill(310,69,getmaxcolor());
      setfillstyle(4,GREEN);
      floodfill(310,29,getmaxcolor());
      setcolor(RED);
      settextstyle(8,0,5);
      outtextxy(270,60,"KBC");
      setcolor(RED);
      setcolor(WHITE);
     }
     void q1()
     {
	int ans;
	int r=0;
	kbc y[20];
	FILE *f;
	f=fopen("question.txt","r");
	fread(y,sizeof(y),1,f);
	structure();
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(540,154,getmaxcolor());
	settextstyle(2,0,5);
	r=rand()%2;
	switch(r)
	{
		case 0:s=0;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a );
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);
			break;
		case 1:s=7;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a);
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);

		}
		g++;
		ans=selectfunction();
		optionC(ans);
		if(ans==3)
		{
			clearviewport();
			q2();
		}
		else
		{
		loser();
		}

	    }

     void q2()
     {
	int ans;
	int r=0;
	kbc y[20];
	FILE *f;
	f=fopen("abc.txt","r");
	fread(y,sizeof(y),1,f);

	setfillstyle(SOLID_FILL,0);
	bar(173,178,442,232);
	settextstyle(0,0,2);
	outtextxy(190,190,"CORRECT ANSWER");
	getch();
	cleardevice();
	structure();
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(540,154,getmaxcolor());
	settextstyle(2,0,5);
	r=rand()%2;
	switch(r)
	{
		case 0:s=14;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a );
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);
			break;
		case 1:s=21;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a);
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);


		}
		g++;
		ans=selectfunction();
		optionB(ans);
		if(ans==2)
		{
			clearviewport();
			q3();
		}

	    }
     void q3()
     {
     int ans;
     int r=0;
     kbc y[20];
	FILE *f;
	f=fopen("abc.txt","r");
	fread(y,sizeof(y),1,f);

	setfillstyle(SOLID_FILL,0);
	bar(173,178,442,232);
	settextstyle(0,0,2);
	outtextxy(190,190,"CORRECT ANSWER");
	getch();
	cleardevice();
	structure();
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(540,154,getmaxcolor());
	settextstyle(2,0,5);
	r=rand()%2;
	switch(r)
	{
		case 0:s=28;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a );
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);
			break;
		case 1:s=35;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a);
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);

		}
		g++;
		ans=selectfunction();
		optionA(ans);
		if(ans==1)
		{
			clearviewport();
			q4();
		}
		}

     void q4()
     {
	int ans;
	int r=0;
	kbc y[20];
	FILE *f;
	f=fopen("question.txt","r");
	fread(y,sizeof(y),1,f);

	setfillstyle(SOLID_FILL,0);
	bar(173,178,442,232);
	settextstyle(0,0,2);
	outtextxy(190,190,"CORRECT ANSWER");
	getch();
	cleardevice();
	structure();
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(540,94,getmaxcolor());
	settextstyle(2,0,5);
	r=rand()%2;
	switch(r)
	{
		case 0:s=42;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a );
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);
			break;
		case 1:s=49;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a);
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);



		}
		g++;
		ans=selectfunction();
		optionC(ans);
		if(ans==3)
		{
			clearviewport();
			q5();
		}
	    }
     void q5()
     {
	int ans;
	int r=0;
	kbc y[20];
	FILE *f;
	f=fopen("abc.txt","r");
	fread(y,sizeof(y),1,f);

	setfillstyle(SOLID_FILL,0);
	bar(173,178,442,232);
	settextstyle(0,0,2);
	outtextxy(190,190,"CORRECT ANSWER");
	getch();
	cleardevice();
	structure();
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(540,94,getmaxcolor());
	settextstyle(2,0,5);
	r=rand()%2;
	switch(r)
	{
		case 0:s=56;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a );
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);
			break;
		case 1:s=63;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a);
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);


		}
		g++;
		ans=selectfunction();
		optionD(ans);
		if(ans==4)
		{
			clearviewport();
			q6();
		}
	    }

  void q6()
     {
	int ans;
	int r=0;
	kbc y[20];
	FILE *f;
	f=fopen("abc.txt","r");
	fread(y,sizeof(y),1,f);

	setfillstyle(SOLID_FILL,0);
	bar(173,178,442,232);
	settextstyle(0,0,2);
	outtextxy(190,190,"CORRECT ANSWER");
	getch();
	cleardevice();
	structure();
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(540,154,getmaxcolor());
	settextstyle(2,0,5);
	r=rand()%2;
	switch(r)
	{
		case 0:s=70;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a );
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);
			break;
		case 1:s=77;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a);
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);


		}
		g++;
		ans=selectfunction();
		optionB(ans);
		if(ans==2)
		{
			clearviewport();
			q7();
		}
	}
     void q7()
     {

	int ans;
	int r=0;
	kbc y[20];
	FILE *f;
	f=fopen("abc.txt","r");
	fread(y,sizeof(y),1,f);

	setfillstyle(SOLID_FILL,0);
	bar(173,178,442,232);
	settextstyle(0,0,2);
	outtextxy(190,190,"CORRECT ANSWER");
	getch();
	cleardevice();
	structure();
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(540,154,getmaxcolor());
	settextstyle(2,0,5);
	r=rand()%2;
	switch(r)
	{
		case 0:s=84;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a );
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);
			break;
		case 1:s=91;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a);
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);


		}
		g++;
		ans=selectfunction();
		optionD(ans);
		if(ans==4)
		{
			clearviewport();
			q8();
		}

	    }
	     void q8()
     {
	int ans;
	int r=0;

	kbc y[20];
	FILE *f;
	f=fopen("abc.txt","r");
	fread(y,sizeof(y),1,f);
	setfillstyle(SOLID_FILL,0);
	bar(173,178,442,232);
	settextstyle(0,0,2);
	outtextxy(190,190,"CORRECT ANSWER");
	getch();
	cleardevice();
	structure();
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(540,154,getmaxcolor());
	settextstyle(2,0,5);
	r=rand()%2;
	switch(r)
	{
		case 0:s=98;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a );
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);
			break;
		case 1:s=105;
			outtextxy(130,255,y[s].a);
			outtextxy(130,280,y[s+1].a);
			outtextxy(130,343,y[s+2].a);
			outtextxy(130,383,y[s+3].a);
			outtextxy(360,345,y[s+4].a);
			outtextxy(360,383,y[s+5].a);


		}
		g++;
		ans=selectfunction();
		optionA(ans);
		if(ans==1)
		{
			clearviewport();
			winner();
		}
		fclose(f);

	    }
	  int selectfunction()
	    {
	     int done,i=0,u=0;
	     do
	     {
		int key=getch();
		switch(key)
		{
		  case 80: u++;//80-Code for down arrow handling
			   if(i==0)
			   {
				setfillstyle(SOLID_FILL,3);
				floodfill(110,355,getmaxcolor());
				setfillstyle(SOLID_FILL,0);
				floodfill(125,400,getmaxcolor());
				floodfill(350,355,getmaxcolor());
				floodfill(355,400,getmaxcolor());
				sound(1000);
				delay(100);
				nosound();
			   }
			   if(i==1)
			   {
				setfillstyle(SOLID_FILL,3);
				floodfill(120,395,getmaxcolor());
				setfillstyle(SOLID_FILL,0);
				floodfill(115,360,getmaxcolor());
				floodfill(355,360,getmaxcolor());
				floodfill(355,400,getmaxcolor());
				sound(1000);
				delay(100);
				nosound();
			   }
			   if(i==2)
			   {
				setfillstyle(SOLID_FILL,3);
				floodfill(350,355,getmaxcolor());
				setfillstyle(SOLID_FILL,0);
				floodfill(115,360,getmaxcolor());
				floodfill(355,400,getmaxcolor());
				floodfill(125,400,getmaxcolor());
				sound(1000);
				delay(100);
				nosound();
			   }
			   if(i==3)
			   {
				setfillstyle(SOLID_FILL,3);
				floodfill(350,400,getmaxcolor());
				setfillstyle(SOLID_FILL,0);
				floodfill(115,360,getmaxcolor());
				floodfill(355,365,getmaxcolor());
				floodfill(125,400,getmaxcolor());
				sound(1000);
				delay(100);
				nosound();
			   }i++;
			   if(i==4)
			   {
				i=0;
			   }
			   break;
		  case 'L':
		  case 'l':if(x==0||y==0||z==0)
			   lifeline();
			   break;
		  case 13 :if(u!=0)
				done=1;
		  default :break;
		}
	     }while(done!=1);
		if(i==0)
		{
		i=4;
		}
		return(i);
     }
   int  correctanswer()
     {
       int i=0;
       if(g==1)
       i=3;
       if(g==2)
       i=2;
       if(g==3)
       i=1;
       if(g==4)
       i=3;
       if(g==5)
       i=4;
       if(g==6)
       i=2;
       if(g==7)
       i=4;
       if(g==8)
       i=1;
       return(i);
 }
 void lifeline()
 {
       int i;
       char a;
       i=correctanswer();
       P:
       setfillstyle(SOLID_FILL,0);
       bar(173,178,442,232);
       settextstyle(2,0,5);
       outtextxy(175,180,"Enter life line which u ");
       outtextxy(175,190,"want to enter ");
       a=getch();
       //Expert advice
       if(a=='1')
       {
		if(x==0)
		{
		  x++;
		  setfillstyle(SOLID_FILL,0);
		  bar(173,178,442,232);
		  if(i==1)
		  {
		    outtextxy(185,190,"Correct Option is: A");
		  }
		  if(i==2)
		  {
		    outtextxy(185,190,"Correct Option is: B");
		  }
		  if(i==3)
		  {
		    outtextxy(185,190,"Correct Option is: C");
		  }if(i==4)
		  {
		    outtextxy(185,190,"Correct Option is: D");
		  }
		  setcolor(RED);
		  line(475,195,515,215);
		  line(475,215,515,195);
		  setcolor(WHITE);
       }
       else
	goto P;
 }
 //50:50
 else if(a=='2')
 {
    if(y==0)
       {
       y++;
       if(i==1)
       {
	 bar(130,384,276,406);
	 bar(364,384,510,406);
       }
       if(i==2)
       {
	 bar(130,344,276,366);
	 bar(364,384,510,406);
       }
       if(i==3)
       {
	 bar(130,344,276,366);
	 bar(130,384,276,406);
       }
       if(i==4)
       {
	 bar(134,344,276,366);
	 bar(134,384,276,406);
       }
       setcolor(RED);
       line(520,195,560,215);
       line(520,215,560,195);
       setcolor(WHITE);
    }
    else
      goto P;
 }
 else if(a=='3')
 {
    if(z==0)
    {
      z++;
      setfillstyle(SOLID_FILL,YELLOW);
      bar(174,14,441,161);
      setfillstyle(SOLID_FILL,RED);
      bar(180,20,184,145);
      bar(180,141,435,145);
      setcolor(BLACK);
      outtextxy(190,143,"     A     B     C    D");
      setcolor(WHITE);
      if(i==1)
      {
	  for(i=0;i!=106;i++)
	  {
	       bar(205,140-i,225,140);
	       delay(10);
	  }
	  for(i=0;i!=71;i++)
	  {
	       bar(265,140-i,285,140);
	       delay(10);
	  }
	  for(i=0;i!=21;i++)
	  {
	       bar(325,140-i,345,140);
	       delay(10);
	  }
	  for(i=0;i!=51;i++)
	  {
	       bar(385,140-i,405,140);
	       delay(10);
	  }
	}
       else if(i==2)
       {
	  for(i=0;i!=21;i++)
	  {
	       bar(205,140-i,225,140);
	       delay(10);
	  }
	  for(i=0;i!=105;i++)
	  {
	       bar(265,140-i,285,140);
	       delay(10);
	  }
	  for(i=0;i!=71;i++)
	  {
	       bar(325,140-i,345,140);
	       delay(10);
	  }
	  for(i=0;i!=51;i++)
	  {
	       bar(385,140-i,405,140);
	       delay(10);
	  }
	}
       else if(i==3)
      {
	  for(i=0;i!=21;i++)
	  {
	       bar(205,140-i,225,140);
	       delay(10);
	  }
	  for(i=0;i!=71;i++)
	  {
	       bar(265,140-i,285,140);
	       delay(10);
	  }
	  for(i=0;i!=105;i++)
	  {
	       bar(325,140-i,345,140);
	       delay(10);
	  }
	  for(i=0;i!=51;i++)
	  {
	       bar(385,140-i,405,140);
	       delay(10);
	  }
	}
     else if(i==4)
      {
	  for(i=0;i!=51;i++)
	  {
	       bar(205,140-i,225,140);
	       delay(10);
	  }
	  for(i=0;i!=21;i++)
	  {
	       bar(265,140-i,285,140);
	       delay(10);
	  }
	  for(i=0;i!=71;i++)
	  {
	       bar(325,140-i,345,140);
	       delay(10);
	  }
	  for(i=0;i!=105;i++)
	  {
	       bar(385,140-i,405,140);
	       delay(10);
	  }
	}
	setcolor(RED);
	line(565,195,605,215);
	line(565,215,605,195);
	setcolor(WHITE);

      }
    }
    else
      goto P;
}
void logo()
{
int i,j;
int x=getmaxx()/2;
int y=getmaxy()/2;
circle(x,y,y-40);
circle(x,y,187);
circle(x,y,134);
for(i=0;i<10;i++)
{
	setcolor(3);
	circle(319,239,188+i);
	circle(319,239,135+i);
	for(j=0;j<4;j++)
	{
	setcolor(WHITE);
	circle(319,239,150+j);
	}
	delay(100);
	}
	setfillstyle(SOLID_FILL,5);
	floodfill(160,239,getmaxcolor());
	floodfill(319,235,getmaxcolor());
	settextstyle(0,0,3);
	setcolor(WHITE);
	delay(500);
	outtextxy(145,180,"*");
	delay(500);
	outtextxy(160,150,"K");
	delay(500);
	outtextxy(180,115,"A");
	delay(500);
	outtextxy(215,87,"U");
	delay(500);
	outtextxy(250,67,"N");
	delay(500);
	outtextxy(285,63,"*");
	delay(500);
	outtextxy(319,60,"B");
	delay(500);
	outtextxy(360,69,"A");
	delay(500);
	outtextxy(401,85,"N");
	delay(500);
	outtextxy(432,115,"E");
	delay(500);
	outtextxy(460,150,"G");
	delay(500);
	outtextxy(475,190,"A");
	delay(500);
	setcolor(YELLOW);
	settextstyle(0,0,5);
	delay(500);
	outtextxy(148,225,"CROREPATI");
	setcolor(WHITE);
	settextstyle(0,0,2);
	delay(600);
	outtextxy(240,163,"Powered By");
	delay(600);
	outtextxy(240,180,"SE CMPN-A");
	delay(600);
	}
	void loser()
	{
	cleardevice();
	settextstyle(0,0,5);
	setcolor(WHITE);
	outtextxy(160,200,"LOSER");delay(1000);
	settextstyle(0,0,3);
	outtextxy(90,320,"YOU WON NOTHING");
	getch();
	}
		void winner()
		{
       cleardevice();
       setbkcolor(BLACK);
       //fireworks();
       setbkcolor(GREEN);
       setcolor(WHITE);
       settextstyle(0,0,4);
       outtextxy(120,200,"CONGRATS");
       settextstyle(0,0,3);
       outtextxy(90,300,"YOU WON 7 CRORE RUPEES");
       getch();
       }
       void optionA(int ans)
       {
       int d;
       if (ans==1)
       {
       for (d=0;d<10;d++)
       {
       setfillstyle(SOLID_FILL,3);
       floodfill(110,355,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,YELLOW);
       floodfill(110,355,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(110,355,getmaxcolor());
       delay(500);
       }
       if(ans==2)
       {
       for (d=0;d<10;d++)
       {
       setfillstyle(SOLID_FILL,YELLOW);
       floodfill(125,400,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,3);
       floodfill(125,400,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(125,400,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(110,355,getmaxcolor());
       getch();
       }
       if(ans==3)
       {
       for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,YELLOW);
       floodfill(350,355,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,3);
       floodfill(350,355,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(350,355,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(110,355,getmaxcolor());
       getch();
       }
       if(ans==4)
       {
	 for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,3);
       floodfill(350,400,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,YELLOW);
       floodfill(350,400,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(350,400,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(110,355,getmaxcolor());
       getch();
       }
       }
       void optionB(int ans)
       {
       int d;
       if(ans==1)
       {
	for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,3);
       floodfill(110,355,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,YELLOW);
       floodfill(125,400,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(110,355,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(125,400,getmaxcolor());
       getch();
       }
       if (ans==2)
       {
       for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,YELLOW);
       floodfill(125,400,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,3);
       floodfill(125,400,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(125,400,getmaxcolor());
       delay(500);
       }
       if(ans==3)
       {
       for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,YELLOW);
       floodfill(350,355,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,3);
       floodfill(350,355,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(125,400,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(350,355,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(125,400,getmaxcolor());
       getch();
       }
       if(ans==4)
       {
	  for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,3);
       floodfill(350,400,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,YELLOW);
       floodfill(350,400,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(350,400,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(125,400,getmaxcolor());
       getch();
       }
       }
       void optionC(int ans)
       {
       int d;
       if(ans==1)
       {
	  for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,3);
       floodfill(110,355,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,YELLOW);
       floodfill(110,355,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(110,355,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(350,355,getmaxcolor());
       getch();
       }
       if(ans==2)
       {
       {
	     for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,YELLOW);
       floodfill(125,400,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,3);
       floodfill(125,400,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(125,355,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(125,355,getmaxcolor());
       getch();
       }
       if(ans==3)
       {
	  for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,YELLOW);
       floodfill(350,355,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,3);
       floodfill(350,355,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(350,355,getmaxcolor());
       delay(500);
       }
       if (ans==4)
       {
	    for(d=0;d<10;d++)
       {
       setfillstyle(SOLID_FILL,3);
       floodfill(350,400,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,YELLOW);
       floodfill(350,400,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(350,400,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(350,355,getmaxcolor());
       getch();
       }
       }
       }
	void optionD(int ans)
	{
	int d;
	if(ans==1)
	{
	    for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,3);
       floodfill(110,355,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,YELLOW);
       floodfill(110,355,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(110,355,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(350,400,getmaxcolor());
       getch();
       }
       if(ans==2)
       {
	  for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,YELLOW);
       floodfill(125,400,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,3);
       floodfill(125,400,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(125,400,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(350,400,getmaxcolor());
       getch();
       }
       if(ans==3)
       {
	  for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,YELLOW);
       floodfill(350,355,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,3);
       floodfill(350,355,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,RED);
       floodfill(350,355,getmaxcolor());
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(125,400,getmaxcolor());
       getch();
       }
       if(ans==4)
       {
	  for(d=0;d<10;d++)
       {
	 setfillstyle(SOLID_FILL,3);
       floodfill(350,400,getmaxcolor());
       delay(200);
       setfillstyle(SOLID_FILL,YELLOW);
       floodfill(350,400,getmaxcolor());
       delay(200);
       }
       setfillstyle(SOLID_FILL,GREEN);
       floodfill(350,400,getmaxcolor());
       delay(500);
       }


