#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
void main()
{
 int i,td,id,d,m,y,booking,s,cs,wb,l,sb,ag,bg,cg,cb,pr;
 short int em,ey,ed;
 char a,n,c,fb,en;
 textbackground(4);
 clrscr();
 gotoxy(35,12);
 printf("Welcome to");
 gotoxy(36,14);
 printf("RED BUS");
 gotoxy(32,16);
 printf("Booking Services");
 gotoxy(50,12);
 printf("*");
 delay(500);
 gotoxy(50,13);
 printf("*");
 delay(500);
 gotoxy(50,14);
 printf("*");
 delay(500);
 gotoxy(50,15);
 printf("*");
 delay(500);
 gotoxy(50,16);
 printf("*");
 delay(500);
 gotoxy(50,17);
 printf("*");
 delay(500);
 gotoxy(32,18);
 for(i=1; i<=10; i++)
 {
  printf("* ");
  delay(500);
 }
 clrscr();
 gotoxy(33,7);
 printf("Already Have Booking");
 gotoxy(33,9);
 printf("1. Yes");
 gotoxy(33,11);
 printf("2. No");
 gotoxy(33,13);
 scanf("%d",&booking);
 delay(1000);
 clrscr();
 if(booking==1)
 {
  gotoxy(33,5);
  printf("RED BUS SERVICE");
  gotoxy(5,10);
  printf("Enter Your Name");
  gotoxy(5,12);
  scanf("%s",&n);
  gotoxy(5,14);
  printf("Enter Your Id.");
  gotoxy(5,16);
  scanf("%d",&id);
  gotoxy(5,18);
  printf("Enter Your Tavelling Date");
  gotoxy(5,20);
  scanf("%d",&d);
  gotoxy(7,20);
  printf("/");
  gotoxy(8,20);
  scanf("%d",&m);
  gotoxy(10,20);
  printf("/");
  gotoxy(11,20);
  scanf("%d",&y);
  delay(500);
  if(id==1234 && d==21 && m==9 && y==2022)
  {
   clrscr();
   gotoxy(35,5);
   printf("BUS SERVICES");
   gotoxy(5,7);
   printf("Id.: %d",id);
   gotoxy(16,7);
   printf("Date:%d/%d/%d",d,m,y);
   gotoxy(5,10);
   printf("1. Cancel Booking");
   gotoxy(5,12);
   printf("2. Location");
   gotoxy(5,14);
   printf("3. Change Seat");
   gotoxy(5,16);
   printf("4. Details");
   gotoxy(5,18);
   scanf("%d",&s);
   delay(1000);
   switch(s)
   {
    case 1:
    {
     clrscr();
     gotoxy(33,5);
     printf("Cancelltion");
     gotoxy(5,10);
     printf("Why cancel?");
     gotoxy(5,12);
     scanf("%s",&c);
     delay(2000);
     clrscr();
     gotoxy(33,10);
     printf("Successfully Cancelled");
     delay(1000);
     exit(0);
    }
    case 2:
    {
     clrscr();
     gotoxy(33,5);
     printf("Location");
     gotoxy(5,10);
     printf("Your Bus at Meerut");
     gotoxy(5,12);
     printf("Reach To The Destination In '15:00'");
     delay(1000);
     exit(0);
    }
    case 3:
    {
     clrscr();
     gotoxy(33,5);
     printf("Change Seat");
     gotoxy(5,10);
     printf("Avalilable Seats");
     gotoxy(20,10);
     printf("1,3,6,10,12,15,18,19");
     gotoxy(20,11);
     printf("21,22,24,26,29,30");
     gotoxy(5,13);
     printf("Choose Your Seat");
     gotoxy(5,15);
     scanf("%s",&cs);
     delay(2000);
     clrscr();
     gotoxy(33,10);
     printf("Successfully Changed");
     delay(1000);
     exit(0);
    }
    case 4:
    {
     clrscr();
     gotoxy(33,5);
     printf("Bus Details");
     gotoxy(5,10);
     printf("Bus Type: A/C Bus");
     gotoxy(5,12);
     printf("Bus Name: Vijay Travels");
     gotoxy(5,14);
     printf("Ticket Amount: 50");
     delay(1000);
     exit(0);
    }
    default:
    {
     clrscr();
     printf("Thank You For Choosing Us");
     delay(1000);
     exit(0);
    }
   }
  }
 }
 else
 {
  gotoxy(33,10);
  printf("Want to Book?");
  gotoxy(5,14);
  printf("1. Yes");
  gotoxy(5,16);
  printf("2. No");
  gotoxy(5,18);
  scanf("%d",&wb);
  delay(1000);
  clrscr();
  if(wb==1)
  {
   gotoxy(33,7);
   printf("Register");
   gotoxy(33,10);
   printf("Enter Name");
   gotoxy(33,12);
   scanf("%s",&en);
   gotoxy(33,14);
   printf("Enter Date");
   gotoxy(33,16);
   scanf("%hd",ed);
   gotoxy(35,16);
   printf("/");
   scanf("%hd",em);
   gotoxy(38,16);
   printf("/");
   scanf("%hd",ey);
   delay(1000);
   clrscr();
   gotoxy(5,7);
   printf("Select Your Location");
   gotoxy(5,9);
   printf("1. Modinagar");
   gotoxy(5,11);
   printf("2. Meerut");
   gotoxy(5,13);
   printf("3. Ghaziabad");
   gotoxy(5,15);
   scanf("%d",&l);
   delay(1000);
   clrscr();
   if(l==1)
   {
    gotoxy(5,7);
    printf("Choose Where To Go");
    gotoxy(5,9);
    printf("1. Ghaziabad");
    gotoxy(5,11);
    printf("2. Meerut");
    gotoxy(5,13);
    printf("3. Hapur");
    gotoxy(5,15);
    scanf("%d",&ag);
   }
   else if(l==2)
   {
    gotoxy(5,7);
    printf("Choose Where To Go");
    gotoxy(5,9);
    printf("1. Siwal");
    gotoxy(5,11);
    printf("2. Modinagar");
    gotoxy(5,13);
    printf("3. Hapur");
    gotoxy(5,15);
    scanf("%d",&bg);
   }
   else if(l==3)
   {
    gotoxy(5,7);
    printf("Choose Where To Go");
    gotoxy(5,9);
    printf("1. Modinagar");
    gotoxy(5,11);
    printf("2. Meerut");
    gotoxy(5,13);
    printf("3. Hapur");
    gotoxy(5,14);
    scanf("%d",&cg);
   }
   else
   {
    gotoxy(30,10);
    printf("Thank You For Choosing Us");
    delay(1000);
    exit(0);
   }
   delay(1000);
   clrscr();
   gotoxy(5,7);
   printf("Select Bus");
   gotoxy(5,9);
   printf("1. A/C Buses");
   gotoxy(5,11);
   printf("2. Electrical Buses");
   gotoxy(5,13);
   printf("3. Normal Buses");
   gotoxy(5,15);
   scanf("%d",&sb);
   delay(1000);
   clrscr();
   if(sb==1)
   {
    gotoxy(5,7);
    printf("A/c Buses");
    gotoxy(5,9);
    printf("1. Suraj Travels");
    gotoxy(5,11);
    printf("2. Ishan Travels");
    gotoxy(5,13);
    printf("3. Bobby Travels");
    gotoxy(5,15);
    scanf("%d",&cb);
   }
   else if(sb==2)
   {
    gotoxy(5,7);
    printf("Electric Buses");
    gotoxy(5,9);
    printf("1. Sushant Buses");
    gotoxy(5,11);
    printf("2. Vijay Tourists");
    gotoxy(5,13);
    printf("3. Dev Buses");
    gotoxy(5,15);
    scanf("%d",&cb);
   }
   else if(sb==3)
   {
    gotoxy(5,7);
    printf("Normal Buses");
    gotoxy(5,9);
    printf("1. Shiva Tourists");
    gotoxy(5,11);
    printf("2. Arun Buses");
    gotoxy(5,13);
    printf("3. Sid Tourists");
    gotoxy(5,15);
    scanf("%d",&cb);
   }
   else
   {
    gotoxy(30,10);
    printf("Sorry Wrong Choice");
    delay(1000);
    exit(0);
   }
   delay(1000);
   clrscr();
   gotoxy(30,10);
   printf("Your Ticket");
   delay(1000);
   if(sb==1 && cb==1)
   {
    gotoxy(30,14);
    printf("Bus Type: A/c Bus");
    gotoxy(30,15);
    printf("Bus Name: Suraj Travels");
    pr=50;
   }
   if(sb==1 && cb==2)
   {
    gotoxy(30,14);
    printf("Bus Type: A/c Bus");
    gotoxy(30,15);
    printf("Bus Name: Ishan Travels");
    pr=50;
   }
   if(sb==1 && cb==3)
   {
    gotoxy(30,14);
    printf("Bus Type: A/c Bus");
    gotoxy(30,15);
    printf("Bus Name: Bobby Travels");
    pr=50;
   }
   if(sb==2 && cb==1)
   {
    gotoxy(30,14);
    printf("Bus Type: Electrical Bus");
    gotoxy(30,15);
    printf("Bus Name: Sushant Buses");
    pr=40;
   }
   if(sb==2 && cb==2)
   {
    gotoxy(30,14);
    printf("Bus Type: Electrical Bus");
    gotoxy(30,15);
    printf("Bus Name: Vijay Tourists");
    pr=40;
   }
   if(sb==2 && cb==3)
   {
    gotoxy(30,14);
    printf("Bus Type: Electrical Bus");
    gotoxy(30,15);
    printf("Bus Name: Dev Buses");
    pr=40;
   }
   if(sb==3 && cb==1)
   {
    gotoxy(30,14);
    printf("Bus Type: Normal Bus");
    gotoxy(30,15);
    printf("Bus Name: Shiva Tourists");
    pr=30;
   }
   if(sb==3 && cb==2)
   {
    gotoxy(30,14);
    printf("Bus Type: Normal Bus");
    gotoxy(30,15);
    printf("Bus Name: Arun Buses");
    pr=30;
   }
   if(sb==3 && cb==3)
   {
    gotoxy(30,14);
    printf("Bus Type: Normal Bus");
    gotoxy(30,15);
    printf("Bus Name: Sid Tourists");
    pr=30;
   }
   delay(1500);
   gotoxy(30,16);
   printf("Payable Amount:");
   gotoxy(45,16);
   printf(" %d",pr);
   delay(2500);
   clrscr();
   gotoxy(33,10);
   printf("successfully booked");
   gotoxy(33,12);
   printf("Your Id: %hd",ed);
   gotoxy(40,12);
   printf("%hd",ey);
   gotoxy(5,20);
   printf("Note:Money is refundable within 10 min after sucessfull booking");
   delay(2000);
   clrscr();
   gotoxy(33,7);
   printf("Any Feedback");
   gotoxy(5,9);
   scanf("%s",&fb);
   delay(1000);
   clrscr();
   gotoxy(30,12);
   printf("Thank You For Your Feedback");
   delay(1000);
   exit(0);
  }
 }
}