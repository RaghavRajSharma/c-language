#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<graphics.h>
void main()
{
 short int a,b,c,d,e,f,g,h,i,j,k,l,m;
 int ta,ca,ma,cha,da,cba,sa,ba,pa,z=1;
 char fb;
 textcolor(11);
 textbackground(1);
 clrscr();
 gotoxy(35,10);
 printf("TAJ HOTEL");
 gotoxy(40,5);
 printf("Welcome");
 delay(500);
 clrscr();
 gotoxy(35,10);
 printf("TAJ HOTEL");
 gotoxy(20,10);
 printf("Welcome");
 delay(500);
 clrscr();
 gotoxy(35,10);
 printf("TAJ HOTEL");
 gotoxy(20,15);
 printf("Welcome");
 delay(500);
 clrscr();
 gotoxy(35,10);
 printf("TAJ HOTEL");
 gotoxy(40,20);
 printf("Welcome");
 delay(500);
 clrscr();
 gotoxy(35,10);
 printf("TAJ HOTEL");
 gotoxy(35,5);
 printf("Welcome");
 delay(500);
 clrscr();
 gotoxy(35,5);
 printf("TAJ HOTEL");
 gotoxy(37,7);
 printf("MENU");
 gotoxy(5,10);
 printf("1. Breakfast");
 gotoxy(5,12);
 printf("2. Lunch");
 gotoxy(5,14);
 printf("3. Dinner");
 gotoxy(5,16);
 printf("Enter Your Choice");
 gotoxy(5,18);
 scanf("%hd",&c);
 switch(c)
 {
  case 1:
  {
   clrscr();
   gotoxy(35,5);
   printf("TAJ HOTEL");
   gotoxy(35,7);
   printf("Breakfast");
   gotoxy(5,10);
   printf("ITEM");
   gotoxy(20,10);
   printf("Rs/-");
   gotoxy(5,12);
   printf("1. Tea");
   gotoxy(20,12);
   printf("15Rs/Pc.");
   gotoxy(5,14);
   printf("2. Coffee");
   gotoxy(20,14);
   printf("50Rs/Pc.");
   gotoxy(5,16);
   printf("3. Milk");
   gotoxy(20,16);
   printf("30Rs/Pc.");
   gotoxy(5,18);
   printf("Enter Your Choice");
   gotoxy(5,20);
   scanf("%hd",&a);
   switch(a)
   {
    case 1:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(37,7);
     printf("Tea");
     gotoxy(5,10);
     printf("Please Enter Quantity");
     gotoxy(5,12);
     scanf("%hd",&e);
     delay(500);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is TEA x %d",e);
     delay(1000);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is Placed");
     ta = e*15;
     gotoxy(35,11);
     printf("Your Total Amount : %d",ta);
     delay(3000);
     clrscr();
     gotoxy(35,10);
     printf("Any Feedback");
     gotoxy(35,12);
     scanf("%s",&fb);
     delay(2000);
     clrscr();
     gotoxy(35,10);
     printf("Thank You For Your Feedback %c",z);
     delay(2000);
     exit(0);
     break;
    }
    case 2:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(37,7);
     printf("Coffee");
     gotoxy(5,10);
     printf("Please Enter Quantity");
     gotoxy(5,12);
     scanf("%hd",&f);
     delay(500);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is COFFEE x %d",f);
     delay(1000);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is Placed");
     ca = f*50;
     gotoxy(35,11);
     printf("Your Total Amount : %d",ca);
     delay(3000);
     clrscr();
     gotoxy(35,10);
     printf("Any Feedback");
     gotoxy(35,12);
     scanf("%s",&fb);
     delay(2000);
     clrscr();
     gotoxy(35,10);
     printf("Thank You For Your Feedback %c",z);
     delay(2000);
     exit(0);
     break;
    }
    case 3:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(37,7);
     printf("Milk");
     gotoxy(5,10);
     printf("Please Enter Quantity");
     gotoxy(5,12);
     scanf("%hd",&g);
     delay(500);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is MILK x %d",g);
     delay(1000);
     clrscr();
     gotoxy(35,7);
     printf("Your Order Is Placed");
     ma = g*30;
     gotoxy(35,11);
     printf("Your Total Amount : %d",ma);
     delay(3000);
     clrscr();
     gotoxy(35,10);
     printf("Any Feedback");
     gotoxy(35,12);
     scanf("%s",&fb);
     delay(2000);
     clrscr();
     gotoxy(35,10);
     printf("Thank You For Your Feedback %c",z);
     delay(2000);
     exit(0);
     break;
    }
    default:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,13);
     printf("Thanks For Choosing Us %c",z);
     delay(1000);
     exit(0);
    }
   }
   delay(1000);
   break;
  }
  case 2:
  {
   clrscr();
   gotoxy(35,5);
   printf("TAJ HOTEL");
   gotoxy(35,7);
   printf("Lunch");
   gotoxy(5,10);
   printf("ITEM");
   gotoxy(25,10);
   printf("Rs/-");
   gotoxy(5,12);
   printf("1. Chapati");
   gotoxy(25,12);
   printf("80Rs/Pc.");
   gotoxy(5,14);
   printf("2. Dosa");
   gotoxy(25,14);
   printf("90Rs/Pc.");
   gotoxy(5,16);
   printf("3. Chole Bhature");
   gotoxy(25,16);
   printf("100Rs/Pc.");
   gotoxy(5,18);
   printf("Enter Your Choice");
   gotoxy(5,20);
   scanf("%hd",&b);
   switch(b)
   {
    case 1:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(37,7);
     printf("Chapati");
     gotoxy(5,10);
     printf("Please Enter Quantity");
     gotoxy(5,12);
     scanf("%hd",&h);
     delay(500);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is CHAPATI x %d",h);
     delay(1000);
     clrscr();
     gotoxy(35,7);
     printf("Your Order Is Placed");
     cha = h*80;
     gotoxy(35,11);
     printf("Your Total Amount : %d",cha);
     delay(3000);
     clrscr();
     gotoxy(35,10);
     printf("Any Feedback");
     gotoxy(35,12);
     scanf("%s",&fb);
     delay(2000);
     clrscr();
     gotoxy(35,10);
     printf("Thank You For Your Feedback %c",z);
     delay(2000);
     exit(0);
     break;
    }
    case 2:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(37,7);
     printf("Dosa");
     gotoxy(5,10);
     printf("Please Enter Quantity");
     gotoxy(5,12);
     scanf("%hd",&i);
     delay(500);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is DOSA x %d",i);
     delay(1000);
     clrscr();
     gotoxy(35,7);
     printf("Your Order Is Placed");
     da = i*90;
     gotoxy(35,11);
     printf("Your Total Amount : %d",da);
     delay(3000);
     clrscr();
     gotoxy(35,10);
     printf("Any Feedback");
     gotoxy(35,12);
     scanf("%s",&fb);
     delay(2000);
     clrscr();
     gotoxy(35,10);
     printf("Thank You For Your Feedback %c",z);
     delay(2000);
     exit(0);
     break;
    }
    case 3:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(37,7);
     printf("Chole Bhature");
     gotoxy(5,10);
     printf("Please Enter Quantity");
     gotoxy(5,12);
     scanf("%hd",&j);
     delay(500);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is CHOLAE BHATURE x %d",j);
     delay(1000);
     clrscr();
     gotoxy(35,7);
     printf("Your Order Is Placed");
     cba = j*100;
     gotoxy(35,11);
     printf("Your Total Amount : %d",cba);
     delay(3000);
     clrscr();
     gotoxy(35,10);
     printf("Any Feedback");
     gotoxy(35,12);
     scanf("%s",&fb);
     delay(2000);
     clrscr();
     gotoxy(35,10);
     printf("Thank You For Your Feedback %c",z);
     delay(2000);
     exit(0);
     break;
    }
    default:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,13);
     printf("Thanks For Choosing Us %c",z);
     delay(1000);
     exit(0);
    }
   }
   delay(1000);
   break;
  }
  case 3:
  {
   clrscr();
   gotoxy(35,5);
   printf("TAJ HOTEL");
   gotoxy(35,7);
   printf("Dinner");
   gotoxy(5,10);
   printf("ITEM");
   gotoxy(25,10);
   printf("Rs/-");
   gotoxy(5,12);
   printf("1. Poodi");
   gotoxy(25,12);
   printf("25Rs/Pc.");
   gotoxy(5,14);
   printf("2. Stuff  Naan");
   gotoxy(25,14);
   printf("35Rs/Pc.");
   gotoxy(5,16);
   printf("3. Butter Naan");
   gotoxy(25,16);
   printf("30Rs/Pc.");
   gotoxy(5,18);
   printf("Enter Your Choice");
   gotoxy(5,20);
   scanf("%hd",&d);
   switch(d)
   {
    case 1:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(37,7);
     printf("Poodi");
     gotoxy(5,10);
     printf("Please Enter Quantity");
     gotoxy(5,12);
     scanf("%hd",&k);
     delay(500);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is POODI x %d",k);
     delay(1000);
     clrscr();
     gotoxy(35,7);
     printf("Your Order Is Placed");
     pa = k*25;
     gotoxy(35,11);
     printf("Your Total Amount : %d",pa);
     delay(3000);
     clrscr();
     gotoxy(35,10);
     printf("Any Feedback");
     gotoxy(35,12);
     scanf("%s",&fb);
     delay(2000);
     clrscr();
     gotoxy(35,10);
     printf("Thank You For Your Feedback %c",z);
     delay(2000);
     exit(0);
     break;
    }
    case 2:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(37,7);
     printf("Suff Naan");
     gotoxy(5,10);
     printf("Please Enter Quantity");
     gotoxy(5,12);
     scanf("%hd",&l);
     delay(500);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is STUFF NAAN x %d",l);
     delay(1000);
     clrscr();
     gotoxy(35,7);
     printf("Your Order Is Placed");
     sa = l*35;
     gotoxy(35,11);
     printf("Your Total Amount : %d",sa);
     delay(3000);
     clrscr();
     gotoxy(35,10);
     printf("Any Feedback");
     gotoxy(35,12);
     scanf("%s",&fb);
     delay(2000);
     clrscr();
     gotoxy(35,10);
     printf("Thank You For Your Feedback %c",z);
     delay(2000);
     exit(0);
     break;
    }
    case 3:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(37,7);
     printf("Butter Naan");
     gotoxy(5,10);
     printf("Please Enter Quantity");
     gotoxy(5,12);
     scanf("%hd",&m);
     delay(500);
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,7);
     printf("Your Order Is BUTTER NAAN x %d",m);
     delay(1000);
     clrscr();
     gotoxy(35,7);
     printf("Your Order Is Placed");
     ba = m*30;
     gotoxy(35,11);
     printf("Your Total Amount : %d",ba);
     delay(3000);
     clrscr();
     gotoxy(35,10);
     printf("Any Feedback");
     gotoxy(35,12);
     scanf("%s",&fb);
     delay(2000);
     clrscr();
     gotoxy(35,10);
     printf("Thank You For Your Feedback %c",z);
     delay(2000);
     exit(0);
     break;
    }
    default:
    {
     clrscr();
     gotoxy(35,5);
     printf("TAJ HOTEL");
     gotoxy(35,13);
     printf("Thanks For Choosing Us %c",z);
     delay(1000);
     exit(0);
    }
   }
   delay(1000);
   break;
  }
  default:
  {
   clrscr();
   gotoxy(35,5);
   printf("TAJ HOTEL");
   gotoxy(35,13);
   printf("Thank You For Coming %c",z);
   delay(1000);
   exit(0);
  }
 }
getch();
}