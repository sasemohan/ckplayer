#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<n;i++)
{
fact=fact*i;
}
printf("%d",fact);
getch();}
