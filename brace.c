#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int op=0,cl=0,flag1,flag2,i,tem;
char c[10];
clrscr();
printf('entr the string ");
scanf("%s",c);
for(i=0;i<10;i++)
{
if(c[i]=='(')
{
op++;
flag1=1;
}
if(c[i]==')')
{
cl++;
flag2=1;
}
}
if(flag1==1)&&(flag2==1)
{
if(op>cl)
{
tem=op-cl;
tem=tem+cl;
}
else if(cl>op)
{
tem=cl-op;
tem=tem+op;
}
else
{
tem=op+cl;
}
}
printf("number of valid paranthesis is %d",tem);
getch();
}

