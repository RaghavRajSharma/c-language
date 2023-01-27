#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<graphics.h>
void main()
{
 short int c;
 int i,p,an,d,w,nb,wnb,cb=10000;
 char n;
 textbackground(BLUE);
 textcolor(RED);
 clrscr();
 gotoxy(37,10);
 printf("Welcome To");
 gotoxy(40,12);
 printf("SBI");
 gotoxy(35,14);
 printf("Banking System");
 gotoxy(31,16);
 for(i=1; i<=7; i++)
 {
  printf(" * ");
  delay(800);
 }
 textcolor(WHITE);
 clrscr();

 gotoxy(37,3);
 printf("SBI");
 gotoxy(33,5);
 printf("Banking System");
 gotoxy(30,14);
 printf("Enter your Password:");
 gotoxy(30,16);
 scanf("%d",&p);
 if(p==1234)
 {
  clrscr();
  gotoxy(30,5);
  printf("Enter your name:");
  gotoxy(30,7);
  scanf("%s",&n);
  gotoxy(30,10);
  printf("Enter your Account:");
  gotoxy(30,12);
  scanf("%d",&an);
  if(an==1234)
  {
   clrscr();
   main:
   gotoxy(30,3);
   printf("Banking System Menu");
   gotoxy(10,10);
   printf("1.Deposit");
   gotoxy(10,12);
   printf("2.Withdrawl");
   gotoxy(10,14);
   printf("3.current_Balence");
   gotoxy(10,16);
   printf("4.Exit");
   gotoxy(10,18);
   printf("Enter Your Choice:");
   gotoxy(10,20);
   scanf("%hd",&c);
   switch(c)
   {
    case 1:
    {
     clrscr();
     gotoxy(30,5);
     printf("Deposit Section");
     gotoxy(30,10);
     printf("Enter Your Amount To Deposit : ");
     gotoxy(30,12);
     scanf("%d",&d);
     cb = cb+d;
     gotoxy(30,16);
     printf("Press 1 For Main Menu");
     gotoxy(30,18);
     scanf("%d",&wnb);
     if(nb==1)
     {
      goto main;
     }
     else
     {
      printf("Exiting....");
      delay(1000);
      exit(0);
     }
     break;
    }
    case 2:
    {
     clrscr();

     gotoxy(30,5);
     printf("Withdrawl Section");
     gotoxy(30,10);
     printf("Enter Your Amount For Withdrawl : ");
     gotoxy(30,12);
     scanf("%d",&w);
     cb = cb-w;
     gotoxy(30,16);
     printf("Press 1 For Main Menu");
     gotoxy(30,18);
     scanf("%d",&wnb);
     if(wnb==1)
     {
      goto main;
     }
     else
     {
      printf("Exiting....");
      delay(1000);
      exit(0);
     }
     break;
    }
    case 3:
    {
     clrscr();

     gotoxy(30,5);
     printf("Current Balance Section");
     gotoxy(30,10);
     printf("Your Current Balance : ");
     gotoxy(30,12);
     printf("%d",cb);
     delay(2000);
     exit(0);
     break;
    }
    case 4:
    {
     clrscr();

     delay(1000);
     exit(0);
    }
   }
  }
  else
  {
  clrscr();
  gotoxy(30,10);
  printf("Try again Later");
  delay(2000);
  exit(0);
  }
}
getch();
}