#include"stdlib.h"
#include"stdio.h"
#include"conio.h"
#include"time.h"
void main()
{
 int i,n,k;
 //srand((unsigned) time(NULL));
 clrscr();
 printf("Enter a Length: ");
 scanf("%d",&n);
 if(n>=5)
 {
  for(i=0;i<n;i++)
  {
   k=rand()%100;
   if((k>=48&&k<=57)||(k>=65&&k<=90)||(k>=97&&k<=122)||(k>=35&&k<=37)||k==64)
   {
    printf("%c",k);
   }
   else
   {
    i--;
   }
  }
  printf("\n");
 }
 else
 printf("length should be greater than 5");
 getch();
}