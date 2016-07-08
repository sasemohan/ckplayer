#include<stdio.h>
#include<conio.h>
void main()
{

int n, i,j,frm=0,to=0,count=0;
clrscr();
   printf("enter the range for the prime numbers to be found first from and then to");
scanf("%d\n",&frm);
scanf("%d\n",&to);
for(j=frm;j<to;j++)
{
    n=j;
    for(i=2; i<=n/2; ++i)
    {
        // condition for prime number
        if(n%i!=0)
        {
            count++;
        }
    }
}
printf("count of prime numbers is %d",count);
getch();
}
