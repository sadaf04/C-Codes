#include<stdio.h>
#include<conio.h>
int main()
{
 int a[5],max,i;
 for(i=0;i<5;i++);
 {
  printf("enter any no.");
  scanf("%d",&a[i]);
 }
 max=a[0];
 for(i=1;i<5;i++)
 {
  if(a[i]>max)
  { 
   max=a[i];
  }
 }
 printf("greatest no. is: %d",max);
 getch();
 return(0);
}
