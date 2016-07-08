#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
char a[10];
char c[10];
char e[100];
int b,d,temp;
clrscr();
printf("enter th number");
scanf("%s",a);
printf("enter the second number");
scanf("%s",c)
b=atoi(a);
d=atoi(c);
temp=b*d;
tostring(e,temp);
printf("%s",e);
getch();
}
