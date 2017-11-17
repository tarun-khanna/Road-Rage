#include<stdlib.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
void main()
{
L:
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
char ch;
char sc[2000];
char choice;
int score=0;
//for damaged cars
int tri[]={200,100,220,150,180,170,200,100};
int poly[]={300,200,350,230,360,280,190,270,300,200};
int poly1[]={280,140,340,120,360,180,270,190,280,140};
int mega_poly[]={230,5,200,100,400,5,350,100,550,5,420,250,540,210,400,470,350,400,170,470,230,400,10,470,140,250,30,270,230,5};

//for user's car
int t11=280;
int t12=350;
int t13=340;
int t14=450;
int f11=295;
int f12=330;
int f13=325;
int f14=350;
int c11=300;
int c12=327;
int c13=320;
int c14=327;

//for white stripes
int l11=150;
int l12=-50;
int l13=160;
int l14=30;
int l21=150;
int l22=100;
int l23=160;
int l24=180;
int l31=150;
int l32=250;
int l33=160;
int l34=330;
int m11=250;
int m12=-50;
int m13=260;
int m14=30;
int m21=250;
int m22=100;
int m23=260;
int m24=180;
int m31=250;
int m32=250;
int m33=260;
int m34=330;
int r11=350;
int r12=-50;
int r13=360;
int r14=30;
int r21=350;
int r22=100;
int r23=360;
int r24=180;
int r31=350;
int r32=250;
int r33=360;
int r34=330;

//for nitro
int n1=0;

//for pc vehicle
int f21;
int f22;
int f23;
int t21;
int t22;
int t23;
int t24;
int f31;
int f32;
int f33;
int t31;
int t32;
int t33;
int t34;
int f41;
int f42;
int f43;
int t41;
int t42;
int t43;
int t44;

//for road barrier
int b1;
int b2;
int b3;

D:
signed int f24=random(-3200);
if(f24>0)
goto D;

int tt=random(4);
switch(tt)
{
case 0:f21=95;
break;
case 1:f21=185;
break;
case 2:f21=285;
break;
case 3:f21=385;
break;
case 4:f21=385;
}
F:
signed int f34=random(-3200);
if(f34>0)
goto F;

int tt1=random(4);
switch(tt1)
{
case 0:f31=95;
break;
case 1:f31=185;
break;
case 2:f31=285;
break;
case 3:f31=385;
break;
case 4:f31=385;
}

H:
signed int f44=random(-3200);
if(f44>0)
goto H;

int tt2=random(4);
switch(tt2)
{
case 0:f41=95;
break;
case 1:f41=185;
break;
case 2:f41=285;
break;
case 3:f41=385;
break;
case 4:f41=385;
}

J:
signed int b4=random(-3200);
if(b4>0)
goto J;

int tt3=random(4);
switch(tt3)
{
case 0:b1=95;
break;
case 1:b1=185;
break;
case 2:b1=285;
break;
case 3:b1=385;
break;
case 4:b1=385;
}
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
fillpoly(15,mega_poly);
//ellipse(320,239,0,360,300,200);
//floodfill(320,239,WHITE);
settextstyle(7,HORIZ_DIR,8);
outtextxy(150,85,"Welcome");
outtextxy(250,155,"To");
outtextxy(200,225,"Road");
outtextxy(200,295,"Rage");
delay(5000);
cleardevice();

while(1)
{
//for road
setcolor(WHITE);
line(70,0,70,getmaxy());
line(450,0,450,getmaxy());
//for white stripes on road
setfillstyle(1,WHITE);
bar(l11,l12,l13,l14);
bar(l21,l22,l23,l24);
bar(l31,l32,l33,l34);
bar(m11,m12,m13,m14);
bar(m21,m22,m23,m24);
bar(m31,m32,m33,m34);
bar(r11,r12,r13,r14);
bar(r21,r22,r23,r24);
bar(r31,r32,r33,r34);

setfillstyle(1,BLACK);
bar(l11,l12-10,l13,l12);
bar(l21,l22-10,l23,l22);
bar(l31,l32-10,l33,l32);
bar(m11,m12-10,m13,m12);
bar(m21,m22-10,m23,m22);
bar(m31,m32-10,m33,m32);
bar(r11,r12-10,r13,r12);
bar(r21,r22-10,r23,r22);
bar(r31,r32-10,r33,r32);
l12+=10;
l14+=10;
l22+=10;
l24+=10;
l32+=10;
l34+=10;
m12+=10;
m14+=10;
m22+=10;
m24+=10;
m32+=10;
m34+=10;
r12+=10;
r14+=10;
r22+=10;
r24+=10;
r32+=10;
r34+=10;

if(l34>getmaxy()+100)
{
l31=150;
l32=-50;
l33=160;
l34=30;
m31=250;
m32=-50;
m33=260;
m34=30;
r31=350;
r32=-50;
r33=360;
r34=30;
}
if(l24>getmaxy()+100)
{
l21=150;
l22=-50;
l23=160;
l24=30;
m21=250;
m22=-50;
m23=260;
m24=30;
r21=350;
r22=-50;
r23=360;
r24=30;
}
if(l14>getmaxy()+100)
{
l11=150;
l12=-50;
l13=160;
l14=30;
m11=250;
m12=-50;
m13=260;
m14=30;
r11=350;
r12=-50;
r13=360;
r14=30;
}
if(kbhit())
{
ch=getche();
//for user's car
switch(ch)
{case 'w':
if(f12<50)
continue;
t12-=50;
t14-=50;
f12-=50;
f14-=50;
c12-=50;
c14-=50;
setfillstyle(SOLID_FILL,BLACK);
bar(t11,t14,t13,t14+50);
break;

case 'a':
if(c11<200)
continue;
t11-=100;
t13-=100;
f11-=100;
f13-=100;
c11-=100;
c13-=100;
setfillstyle(SOLID_FILL,BLACK);
bar(t11+100,t12,t13+100,t14);
bar(f11+100,f12,f13+100,f14);
setcolor(BLACK);
circle(c11+100,c12,3);
circle(c13+100,c14,3);
floodfill(c11+1+100,c12+1,BLACK);
floodfill(c13+1+100,c14+1,BLACK);
break;

case 'd':
if(c13>=420)
continue;

t11+=100;
t13+=100;
f11+=100;
f13+=100;
c11+=100;
c13+=100;
setfillstyle(SOLID_FILL,BLACK);
bar(t11-100,t12,t13-100,t14);
bar(f11-100,f12,f13-100,f14);
setcolor(BLACK);
circle(c11-100,c12,3);
circle(c13-100,c14,3);
floodfill(c11+1-100,c12+1,BLACK);
floodfill(c13+1-100,c14+1,BLACK);
break;

case 's':
if(t14>=450)
continue;
t12+=130;
t14+=130;
f12+=130;
f14+=130;
c12+=130;
c14+=130;
setfillstyle(SOLID_FILL,BLACK);
bar(t11,c12-130-3,t13,c12-3);
break;

case 'n':
if(f12<50||n1>=5)
continue;
t12-=100;
t14-=100;
f12-=100;
f14-=100;
c12-=100;
c14-=100;
n1++;
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
bar(t11,t12,t13,t14);
setfillstyle(SOLID_FILL,YELLOW);
bar(f11,f12,f13,f14);
circle(c11,c12,3);
circle(c13,c14,3);
setfillstyle(SOLID_FILL,BLUE);
floodfill(c11+1,c12+1,WHITE);
floodfill(c13+1,c14+1,WHITE);
rectangle(t11+10,t14,t11+20,getmaxy()+20);
rectangle(t13-10,t14,t13-20,getmaxy()+20);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(t11+15,t14+1,WHITE);
floodfill(t13-15,t14+1,WHITE);
delay(50);

setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(t11,t12+100,t13,t14+100);
bar(f11,f12+100,f13,f12+100);
circle(c11,c12+100,3);
circle(c13,c14+100,3);
floodfill(c11+1,c12+100+1,BLACK);
floodfill(c13+1,c14+100+1,BLACK);
bar(t11+10,t14+100,t11+20,getmaxy()+20);
bar(t13-10,t14+100,t13-20,getmaxy()+20);
break;

case 'p':
//for user's car
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
bar(t11,t12,t13,t14);
setfillstyle(SOLID_FILL,YELLOW);
bar(f11,f12,f13,f14);
circle(c11,c12,3);
circle(c13,c14,3);
setfillstyle(SOLID_FILL,BLUE);
floodfill(c11+1,c12+1,WHITE);
setfillstyle(SOLID_FILL,BLUE);
floodfill(c13+1,c14+1,WHITE);

//for pc car
setfillstyle(HATCH_FILL,YELLOW);
bar(t21,t22,t23,t24);
setfillstyle(SOLID_FILL,BLUE);
bar(f21,f22,f23,f24);
setfillstyle(CLOSE_DOT_FILL,CYAN);
bar(t31,t32,t33,t34);
setfillstyle(SOLID_FILL,GREEN);
bar(f31,f32,f33,f34);
setfillstyle(LINE_FILL,MAGENTA);
bar(t41,t42,t43,t44);
setfillstyle(SOLID_FILL,LIGHTGRAY);
bar(f41,f42,f43,f44);

//for barricade
setfillstyle(1,RED);
bar(b1-20,b2,b3,b4);
settextstyle(1,HORIZ_DIR,2);
outtextxy(b1-15,b2+1,"-XXX-");


//for nitro
rectangle(35,300,65,450);
line(35,330,65,330);
line(35,360,65,360);
line(35,390,65,390);
line(35,420,65,420);
switch(n1)
{
case 0:setfillstyle(1,RED);
floodfill(36,301,WHITE);
setfillstyle(1,LIGHTRED);
floodfill(36,331,WHITE);
setfillstyle(1,YELLOW);
floodfill(36,361,WHITE);
setfillstyle(1,LIGHTBLUE);
floodfill(36,391,WHITE);
setfillstyle(1,BLUE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
break;

case 1:setfillstyle(1,BLACK);
floodfill(36,301,WHITE);
setfillstyle(1,LIGHTRED);
floodfill(36,331,WHITE);
setfillstyle(1,YELLOW);
floodfill(36,361,WHITE);
setfillstyle(1,LIGHTBLUE);
floodfill(36,391,WHITE);
setfillstyle(1,BLUE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
break;

case 2:setfillstyle(1,BLACK);
floodfill(36,301,WHITE);
floodfill(36,331,WHITE);
setfillstyle(1,YELLOW);
floodfill(36,361,WHITE);
setfillstyle(1,LIGHTBLUE);
floodfill(36,391,WHITE);
setfillstyle(1,BLUE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
break;

case 3:setfillstyle(1,BLACK);
floodfill(36,301,WHITE);
floodfill(36,331,WHITE);
floodfill(36,361,WHITE);
setfillstyle(1,LIGHTBLUE);
floodfill(36,391,WHITE);
setfillstyle(1,BLUE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
break;

case 4:setfillstyle(1,BLACK);
floodfill(36,301,WHITE);
floodfill(36,331,WHITE);
floodfill(36,361,WHITE);
floodfill(36,391,WHITE);
setfillstyle(1,BLUE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
break;

case 5:setfillstyle(1,BLACK);
floodfill(36,301,WHITE);
floodfill(36,331,WHITE);
floodfill(36,361,WHITE);
floodfill(36,391,WHITE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
}

settextstyle(8,HORIZ_DIR,4);
outtextxy(460,0,"SCORE=");
cout<<"\t\t\t\t\b\t\t\t\t\t\t"<<++score<<"\r";
settextstyle(10,HORIZ_DIR,3);
outtextxy(460,160,"PRESS==>");
settextstyle(7,HORIZ_DIR,3);
outtextxy(460,210,"W: Up");
outtextxy(460,240,"A: Left");
outtextxy(460,270,"S: Down");
outtextxy(460,300,"D: Right");
outtextxy(460,330,"P: Pause");
outtextxy(460,360,"N: Nitro");
outtextxy(460,390,"X: Quit");

while(1)
{if(getche()=='p')
break;
}
break;

case 'x':
exit(0);
}}
//for user's car
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
bar(t11,t12,t13,t14);
setfillstyle(SOLID_FILL,YELLOW);
bar(f11,f12,f13,f14);
circle(c11,c12,3);
circle(c13,c14,3);
setfillstyle(SOLID_FILL,BLUE);
floodfill(c11+1,c12+1,WHITE);
setfillstyle(SOLID_FILL,BLUE);
floodfill(c13+1,c14+1,WHITE);

//for pc car
f22=f24-20;
f23=f21+30;
t21=f21-10;
t22=f22-80;
t23=f23+10;
t24=f22;
setfillstyle(HATCH_FILL,YELLOW);
bar(t21,t22,t23,t24);
setfillstyle(SOLID_FILL,BLUE);
bar(f21,f22,f23,f24);

setfillstyle(1,BLACK);
bar(t21,t22-25,t23,t22);

f24+=25;
if(getpixel(f11,f12-1)==BLUE||getpixel(r11,r12+50)==BLUE)
{
cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
setcolor(YELLOW);
outtextxy(100,2,"KABOOM");

//for road
setcolor(WHITE);
line(70,0,70,getmaxy());
line(450,0,450,getmaxy());
//for white stripes on road
setfillstyle(1,WHITE);
bar(l11,l12,l13,l14);
bar(l21,l22,l23,l24);
bar(l31,l32,l33,l34);
bar(m11,m12,m13,m14);
bar(m21,m22,m23,m24);
bar(m31,m32,m33,m34);
bar(r11,r12,r13,r14);
bar(r21,r22,r23,r24);
bar(r31,r32,r33,r34);

//for damaged cars
setfillstyle(SOLID_FILL,RED);
fillpoly(5,poly);
setfillstyle(HATCH_FILL,YELLOW);
fillpoly(5,poly1);
setfillstyle(SOLID_FILL,BLUE);
fillpoly(4,tri);
setfillstyle(SOLID_FILL,LIGHTGRAY);
circle(190,200,20);
circle(190,200,5);
floodfill(196,206,WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(180,360,20);
circle(180,360,5);
floodfill(186,366,WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(290,100,20);
circle(290,100,5);
floodfill(296,106,WHITE);
delay(2000);
cleardevice();

settextstyle(4,HORIZ_DIR,8);
outtextxy(150,150,"final score");
settextstyle(1,HORIZ_DIR,5);
outtextxy(310,240,"||");
outtextxy(302,260,"v");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\b\b"<<score;
delay(2000);
cleardevice();
outtextxy(130,170,"want to play again");
fflush(stdin);
choice=getche();
if(choice=='y')
goto L;
else
exit(0);


}

//for pc car
if(t22>getmaxy())
{E:
f24=random(-3200);
if(f24>0)
goto E;

tt=random(4);
switch(tt)
{
case 0:f21=95;
break;
case 1:f21=185;
break;
case 2:f21=285;
break;
case 3:f21=385;
break;
case 4:f21=385;
}

}
//for pc car

f32=f34-30;
f33=f31+30;
t31=f31-20;
t32=f32-100;
t33=f33+20;
t34=f32;
setfillstyle(CLOSE_DOT_FILL,CYAN);
bar(t31,t32,t33,t34);
setfillstyle(SOLID_FILL,GREEN);
bar(f31,f32,f33,f34);

setfillstyle(1,BLACK);
bar(t31,t32-30,t33,t32);

f34+=30;
if(getpixel(f11,f12-1)==GREEN||getpixel(r11,r12+50)==GREEN)
{
cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
setcolor(YELLOW);
outtextxy(100,2,"KABOOM");

//for road
setcolor(WHITE);
line(70,0,70,getmaxy());
line(450,0,450,getmaxy());
//for white stripes on road
setfillstyle(1,WHITE);
bar(l11,l12,l13,l14);
bar(l21,l22,l23,l24);
bar(l31,l32,l33,l34);
bar(m11,m12,m13,m14);
bar(m21,m22,m23,m24);
bar(m31,m32,m33,m34);
bar(r11,r12,r13,r14);
bar(r21,r22,r23,r24);
bar(r31,r32,r33,r34);

//for damaged cars
setfillstyle(SOLID_FILL,RED);
fillpoly(5,poly);
setfillstyle(CLOSE_DOT_FILL,CYAN);
fillpoly(5,poly1);
setfillstyle(SOLID_FILL,GREEN);
fillpoly(4,tri);
setfillstyle(SOLID_FILL,LIGHTGRAY);
circle(190,200,20);
circle(190,200,5);
floodfill(196,206,WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(180,360,20);
circle(180,360,5);
floodfill(186,366,WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(290,100,20);
circle(290,100,5);
floodfill(296,106,WHITE);
delay(2000);
cleardevice();
settextstyle(4,HORIZ_DIR,8);
outtextxy(150,150,"final score");
settextstyle(1,HORIZ_DIR,5);

outtextxy(310,240,"||");
outtextxy(302,260,"v");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\b\b"<<score;
delay(2000);
cleardevice();
outtextxy(130,170,"want to play again");
fflush(stdin);
choice=getche();
if(choice=='y')
goto L;
else

exit(0);

}


if(t32>getmaxy())
{G:
f34=random(-3200);
if(f34>0)
goto G;

tt1=random(4);
switch(tt1)
{
case 0:f31=95;
break;
case 1:f31=185;
break;
case 2:f31=285;
break;
case 3:f31=385;
break;
case 4:f31=385;
}

}
//for pc car
f42=f44-20;
f43=f41+30;
t41=f41-10;
t42=f42-80;
t43=f43+10;
t44=f42;
setfillstyle(LINE_FILL,MAGENTA);
bar(t41,t42,t43,t44);
setfillstyle(SOLID_FILL,LIGHTGRAY);
bar(f41,f42,f43,f44);

setfillstyle(1,BLACK);
bar(t41,t42-20,t43,t42);

f44+=20;
if(getpixel(f11,f12-1)==LIGHTGRAY||getpixel(r11,r12+50)==LIGHTGRAY)
{
cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
setcolor(YELLOW);
outtextxy(100,2,"KABOOM");

//for road
setcolor(WHITE);
line(70,0,70,getmaxy());
line(450,0,450,getmaxy());
//for white stripes on road
setfillstyle(1,WHITE);
bar(l11,l12,l13,l14);
bar(l21,l22,l23,l24);
bar(l31,l32,l33,l34);
bar(m11,m12,m13,m14);
bar(m21,m22,m23,m24);
bar(m31,m32,m33,m34);
bar(r11,r12,r13,r14);
bar(r21,r22,r23,r24);
bar(r31,r32,r33,r34);

//for damaged cars
setfillstyle(SOLID_FILL,BROWN);
fillpoly(5,poly);
setfillstyle(LINE_FILL,MAGENTA);
fillpoly(5,poly1);
setfillstyle(WIDE_DOT_FILL,LIGHTGRAY);
fillpoly(4,tri);
setfillstyle(SOLID_FILL,WHITE);
circle(190,200,20);
circle(190,200,5);
floodfill(196,206,WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(180,360,20);
circle(180,360,5);
floodfill(186,366,WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(290,100,20);
circle(290,100,5);
floodfill(296,106,WHITE);
delay(2000);
cleardevice();
settextstyle(4,HORIZ_DIR,8);
outtextxy(150,150,"final score");
settextstyle(1,HORIZ_DIR,5);

outtextxy(310,240,"||");
outtextxy(302,260,"v");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\b\b"<<score;
delay(2000);
cleardevice();
outtextxy(130,170,"want to play again");
fflush(stdin);
choice=getche();
if(choice=='y')
goto L;
else
exit(0);

}


if(t42>getmaxy())
{I:
f44=random(-3200);
if(f44>0)
goto I;

tt2=random(4);
switch(tt2)
{
case 0:f41=95;
break;
case 1:f41=185;
break;
case 2:f41=285;
break;
case 3:f41=385;
break;
case 4:f41=385;
}

}
//for barricade

b2=b4-30;
b3=b1+50;
setfillstyle(1,RED);
bar(b1-20,b2,b3,b4);
settextstyle(1,HORIZ_DIR,2);
outtextxy(b1-15,b2+1,"-XXX-");

setfillstyle(1,BLACK);
bar(b1-20,b2-30,b3,b2);

b4+=30;
if(getpixel(f11,f12-1)==RED||getpixel(r11,r12+50)==RED)
{
cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
setcolor(YELLOW);
outtextxy(100,2,"KABOOM");

//for road
setcolor(WHITE);
line(70,0,70,getmaxy());
line(450,0,450,getmaxy());
//for white stripes on road
setfillstyle(1,WHITE);
bar(l11,l12,l13,l14);
bar(l21,l22,l23,l24);
bar(l31,l32,l33,l34);
bar(m11,m12,m13,m14);
bar(m21,m22,m23,m24);
bar(m31,m32,m33,m34);
bar(r11,r12,r13,r14);
bar(r21,r22,r23,r24);
bar(r31,r32,r33,r34);

//for damaged cars
setfillstyle(SOLID_FILL,RED);
fillpoly(5,poly);
setfillstyle(HATCH_FILL,YELLOW);
fillpoly(5,poly1);
setfillstyle(SOLID_FILL,GREEN);
fillpoly(4,tri);
setfillstyle(SOLID_FILL,LIGHTGRAY);
circle(190,200,20);
circle(190,200,5);
floodfill(196,206,WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(180,360,20);
circle(180,360,5);
floodfill(186,366,WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(290,100,20);
circle(290,100,5);
floodfill(296,106,WHITE);
delay(2000);
cleardevice();
settextstyle(4,HORIZ_DIR,8);
outtextxy(150,150,"final score");
settextstyle(1,HORIZ_DIR,5);
outtextxy(310,240,"||");
outtextxy(302,260,"v");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\b\b"<<score;
delay(2000);
cleardevice();
outtextxy(130,170,"want to play again");
fflush(stdin);
choice=getche();
if(choice=='y')
goto L;
else
exit(0);

}


if(b2>getmaxy())
{K:
b4=random(-3200);
if(b4>0)
goto K;

tt3=random(4);
switch(tt3)
{
case 0:b1=95;
break;
case 1:b1=185;
break;
case 2:b1=285;
break;
case 3:b1=385;
break;
case 4:b1=385;
}
}


//for text
settextstyle(8,HORIZ_DIR,4);
outtextxy(460,0,"SCORE=");
cout<<"\t\t\t\t\b\b\t\t\t\t\t\t"<<++score<<"\r";
settextstyle(10,HORIZ_DIR,3);
outtextxy(460,160,"PRESS==>");
settextstyle(7,HORIZ_DIR,3);
outtextxy(460,210,"W: Up");
outtextxy(460,240,"A: Left");
outtextxy(460,270,"S: Down");
outtextxy(460,300,"D: Right");
outtextxy(460,330,"P: Pause");
outtextxy(460,360,"N: Nitro");
outtextxy(460,390,"X: Quit");

//for nitro
rectangle(35,300,65,450);
line(35,330,65,330);
line(35,360,65,360);
line(35,390,65,390);
line(35,420,65,420);
switch(n1)
{
case 0:setfillstyle(1,RED);
floodfill(36,301,WHITE);
setfillstyle(1,LIGHTRED);
floodfill(36,331,WHITE);
setfillstyle(1,YELLOW);
floodfill(36,361,WHITE);
setfillstyle(1,LIGHTBLUE);
floodfill(36,391,WHITE);
setfillstyle(1,BLUE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
break;

case 1:setfillstyle(1,BLACK);
floodfill(36,301,WHITE);
setfillstyle(1,LIGHTRED);
floodfill(36,331,WHITE);
setfillstyle(1,YELLOW);
floodfill(36,361,WHITE);
setfillstyle(1,LIGHTBLUE);
floodfill(36,391,WHITE);
setfillstyle(1,BLUE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
break;

case 2:setfillstyle(1,BLACK);
floodfill(36,301,WHITE);
floodfill(36,331,WHITE);
setfillstyle(1,YELLOW);
floodfill(36,361,WHITE);
setfillstyle(1,LIGHTBLUE);
floodfill(36,391,WHITE);
setfillstyle(1,BLUE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
break;

case 3:setfillstyle(1,BLACK);
floodfill(36,301,WHITE);
floodfill(36,331,WHITE);
floodfill(36,361,WHITE);
setfillstyle(1,LIGHTBLUE);
floodfill(36,391,WHITE);
setfillstyle(1,BLUE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
break;

case 4:setfillstyle(1,BLACK);
floodfill(36,301,WHITE);
floodfill(36,331,WHITE);
floodfill(36,361,WHITE);
floodfill(36,391,WHITE);
setfillstyle(1,BLUE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
break;

case 5:setfillstyle(1,BLACK);
floodfill(36,301,WHITE);
floodfill(36,331,WHITE);
floodfill(36,361,WHITE);
floodfill(36,391,WHITE);
floodfill(36,421,WHITE);
settextstyle(7,VERT_DIR,3);
outtextxy(8,370,"NITRO");
}
delay(1);
}
getch();
closegraph();
}