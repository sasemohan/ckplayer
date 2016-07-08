#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char a[20];
int i=0;
printf("enter the string");
scanf("%s",a);
for(i=0;i<20;i++)
{
if(isalpha(a[i]))
{
break;
}
}
printf("not valid integer");
getch();
}
