#include"stdio.h"
#include"conio.h"
void main()
{
 int a[1000],i,n,k,j;
 clrscr();
 printf("Enter array limit ");
 scanf("%d",&n);
 for(i=0;i<n;i++){
  printf("Elemet %d ",i+1);
  scanf("%d",&a[i]);
  printf("\n");
 }
 for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
   if(a[i]==a[j]){
    for(k=j;k<n-1;k++){
     a[k]=a[k+1];
    }
    n--;
    j--;
   }
  }
 }
 for(i=0;i<n;i++){
  printf("%d",a[i]);
 }
 getch();
}