#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j=0;
char s[100];
clrscr();
printf("enter the string");
scanf("%s",s);
for(j=0;j<5;j++)
{
i=s[j];
printf("%d",i);
}
getch();
}
