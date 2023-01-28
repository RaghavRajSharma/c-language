#include<stdio.h>
#include<conio.h>
void main()
{
 char h;
 while(1)
 {
  if(kbhit())
  {
   h = getch();
   if(int(h)==27)
   break;
   printf("Key prssed: %c ",h);
  }
 }
 getch();
}
