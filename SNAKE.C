#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
int x=35,y=15,i,j,a;
void main()
{
 clrscr();
 gotoxy(1,1);
 for(i=1;i<=80;i++)
 {
  printf("*");
 }
 gotoxy(1,1);
 for(j=1;j<=24;j++)
 {
  printf("*\n");
 }
 gotoxy(1,24);
 for(i=1;i<=80;i++)
 {
  printf("*");
 }
 for(j=1;j<=24;j++)
 {
  gotoxy(80,j);
  printf("*");
 }
 gotoxy(x,y);
 printf("@");
 while(1)
 {
  scanf("%d",a);
  if(a==6)
  {
   x=x+2;
  }
  else if(a==4)
  {
   x=x-2;
  }
  else if(a==2)
  {
   y=y+2;
  }
  else if(a==8)
  {
   y=y-2;
  }
  else
  {
   exit(0);
  }
  clrscr();
  if(x<=1 || x>=80 || y<=1 || y>=24)
  {
   gotoxy(35,12);
   printf("GAME OVER");
  }
  gotoxy(1,1);
  for(i=1;i<=80;i++)
  {
   printf("*");
  }
  gotoxy(1,1);
  for(j=1;j<=24;j++)
  {
   printf("*\n");
  }
  gotoxy(1,24);
  for(i=1;i<=80;i++)
  {
   printf("*");
  }
  for(j=1;j<=24;j++)
  {
   gotoxy(80,j);
   printf("*");
  }
  gotoxy(x,y);
  printf("@");
 }
 getch();
}