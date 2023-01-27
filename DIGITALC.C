#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
 short int s=0,m=0,h=0;
 textcolor(12);
 textbackground(1);
 clrscr();
 while(1)
 {
  s++;
  delay(1000);
  if(s==60)
  {
  m++;
  s=0;
  }
  if(m==60)
  {
  h++;
  m=0;
  }
  if(h==24)
  {
  h=0;
  m=0;
  s=0;
  }
  gotoxy(32,10);
  printf("Digital Clock = %d:%d:%d",h,m,s);
 }
}