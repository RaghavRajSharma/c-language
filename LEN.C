//How to find length of string without strlen().
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
 int i;
 char ch[1000];
 clrscr();
 gets(ch);
 for(i=0;ch[i]!='\0';i++);
 printf("%d",i);
 getch();
}
