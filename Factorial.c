/*program to find factorial of a number*/
#include<conio.h>
#include<stdio.h>
int main()
{
 int n,p=1;
 clrscr();
 printf("enter a no.");
 scanf("%d",&n);
 while(n>0)
 { 
  p=p*n;
  n=n-1;
 }
 printf("\nfactorial is: %d",p);
 getch();
 return(0);
}
