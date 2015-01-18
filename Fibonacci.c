#include<conio.h>
#include<stdio.h>
int main()
{
 int n,m,a=0,b=1,i=2;
 printf("enter no. of terms");
 scanf("%d",&n);
 printf("fibonacci series:%d\n%d",a,b);
 while(n>i)
 {
  m=a+b;
  a=b;
  b=m;
  printf("\n%d",m);
  i=i+1;
 }
 getch();
 return(0);
} 
